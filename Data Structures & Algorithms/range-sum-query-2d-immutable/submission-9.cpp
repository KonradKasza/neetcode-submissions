class NumMatrix {
private:
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;

        for (int i = 0; i<mat.size(); i++){
            for(int j = 1; j<mat[0].size(); j++){
                mat[i][j] += mat[i][j-1];
            }
        }

        for(int j = 0; j<mat[0].size(); j++){
            for (int i = 1; i<mat.size(); i++){
                mat[i][j] += mat[i-1][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = mat[row2][col2];
        total -= (row1 > 0) ? mat[row1 - 1][col2] : 0;
        total -= (col1 > 0) ? mat[row2][col1 - 1] : 0;

        total += (row1 > 0 && col1 > 0) ? mat[row1 - 1][col1 - 1] : 0;
        return total;


    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */