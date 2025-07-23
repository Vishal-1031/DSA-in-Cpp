class Solution {
    public:
        vector<int> generateRows(int row) {
            vector<int> temp;
            int ans = 1;
            temp.push_back(ans);
            for (int col = 1; col < row; col++) {
                // this is a new formula to get elements in the nth row 
                ans = ans * (row - col);
                ans = ans / col;
                
                temp.push_back(ans);
            }
            return temp;
        }
    
    public:
        vector<vector<int>> generate(int numRows) {
    
            vector<vector<int>> triangle;
            for (int i = 1; i <= numRows; i++) {
                triangle.push_back(generateRows(i));
            }
            return triangle;
        }
    };