class Solution {
    public:
        void markRow(vector<vector<int>>& matrix, int row, int n, int m) {
            // we have row = row
            for (int i = 0; i < m; i++) {
                if (matrix[row][i] != 0) {
                    matrix[row][i] = INT_MAX;
                }
            }
        }
    public :
        void markCol(vector<vector<int>>& matrix, int col, int n, int m) {
            // we have col = Col
            for (int i = 0; i < n; i++) {
                if (matrix[i][col] != 0) {
                    matrix[i][col] = INT_MAX;
                }
            }
        }
    
    public:
        void setZeroes(vector<vector<int>>& matrix) {
    
            int r = matrix.size();
            int c = matrix[0].size();
    
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (matrix[i][j] == 0) {
                        markRow(matrix, i, r, c);
                        markCol(matrix, j, r, c);
                    }
                }
            }
    
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (matrix[i][j] == INT_MAX) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    };