class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
    unordered_map<int, pair<int, int>> dict_mat;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            dict_mat[mat[i][j]] = make_pair(i, j);
        }
    }

    vector<int> row_count(mat.size(), 0);
    vector<int> col_count(mat[0].size(), 0);

    for (int i = 0; i < arr.size(); i++) {
        pair<int, int> cell = dict_mat[arr[i]];
        int row = cell.first;
        int col = cell.second;
        row_count[row]++;
        col_count[col]++;


        if (row_count[row] == mat[0].size() || col_count[col] == mat.size()) {
            return i;
        }
    }

    return -1;
    }
};