class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> > res; // result array to be returned
        vector<string> nQueens(n, string(n, '.')); // vector containing n strings , each string is a size of n initialised with '.' like 
        /* vector: ["....",
                    "....",
                    "....",
                    "...."] when n=4 */
        solveNQueens(res, nQueens, 0, n); //the fucn to find the solution
        return res;
    }
    void solveNQueens(vector<vector<string> > &res, vector<string> &nQueens, int row, int &n) {
        if (row == n) /*this assumes that the last row has been reached and hence the queens are placed in all rows */{
            res.push_back(nQueens);/* pushes the placement of nqueens to the resultant array like 
                                    [
                                        "Q...",
                                        ".Q..",
                                        "...Q",
                                        "..Q.",
                                    ]
        */           
            return;
        }
        for (int col = 0; col != n; ++col) // this is coz we want to place the queen in every column and check whether the answer is feasible or not for all the queens 
            if (isValid(nQueens, row, col, n)) {       //check if the current col is valid or not 
                nQueens[row][col] = 'Q';    // if valid then place the queen there
                solveNQueens(res, nQueens, row + 1, n); // check for the subsequent row i.e. if the subsequent row can contain a queen 
                nQueens[row][col] = '.'; // if not valid then backtrack or set it as previous .
            } // repeat the above for every column and hence every row till it is equal to n
    }
    bool isValid(std::vector<std::string> &nQueens, int row, int col, int &n) {
        //check if the column had a queen before.
        for (int i = 0; i != row; ++i)
            if (nQueens[i][col] == 'Q')
                return false;
        //check if the 45° diagonal had a queen before.
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (nQueens[i][j] == 'Q')
                return false;
        //check if the 135° diagonal had a queen before.
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (nQueens[i][j] == 'Q')
                return false;
        return true;
    }
};