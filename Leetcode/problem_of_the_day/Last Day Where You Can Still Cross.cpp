class Solution {
    vector<int> dx{0, 1, 0, -1};
    vector<int> dy{-1, 0, 1, 0};
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        
        int i = 0, j = cells.size() - 1, ans = 0;
        while(i <= j)
        {   
            int mid = i + (j - i) / 2;
            if(helper(cells, mid, row, col))
                ans = mid, i = mid + 1;
            else
                j = mid - 1;
        }

        return ans + 1;
    }

    bool helper(vector<vector<int>> &cells, int n, int r, int c)
    {
        vector<vector<int>> grid(r, vector<int> (c, 0));
        for(int i = 0; i <= n; i++)
            grid[cells[i][0] - 1][cells[i][1] - 1] = 1;

        queue<pair<int, int>> q;
        for(int i = 0; i < c; i++)
            if(!grid[0][i])
                q.push({0, i}), grid[0][i] = 1;

        while(!q.empty())
        {
            auto tmp = q.front();
            q.pop();

            if(tmp.first == r - 1)
                return true;

            for(int k = 0; k < dx.size(); k++)
            {
                int x = tmp.first + dx[k], y = tmp.second + dy[k];
                if(x >= 0 && y >= 0 && x < r && y < c && !grid[x][y])
                    q.push({x, y}), grid[x][y] = 1;
            }
        }
        
        return false;
    }
};
