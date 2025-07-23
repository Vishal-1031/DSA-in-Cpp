class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
    
            int n = matrix.size();
            int m = matrix[0].size();
            bool col0 = false;
            // Traverse the matrix:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (matrix[i][j] == 0) {
                        // mark ith index of row wih 1:
                        matrix[i][0] = 0;
    
                        // mark jth index of col wih 1:
                        if (j != 0) {
                            matrix[0][j] = 0;
                        } else {
                            col0 = true;
                        }
                    }
                }
            }
    
            // Finally, mark all (i, j) as 0
            // if row[i] or col[j] is marked with 1.
            for (int i = 1; i < n; i++) {
                for (int j = 1; j < m; j++) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
    
            if (matrix[0][0] == 0) {
                for (int i = 0; i < m; i++) {
                    matrix[0][i] = 0;
                }
            }
            if (col0 == true) {
                for (int i = 0; i < n; i++) {
                    matrix[i][0] = 0;
                }
            }
        }
    };