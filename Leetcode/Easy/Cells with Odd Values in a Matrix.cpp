class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> r_i(m);
        vector<int> c_i(n);
        for (const auto& index : indices){
            r_i[index[0]]++, c_i[index[1]]++;
        }
        int cnt = 0;
        for (int r=0;r<m;r++){
            for (int c=0;c<n;c++){
                cnt += (r_i[r] + c_i[c])%2;
            }
        }
      return cnt;
    }
};
