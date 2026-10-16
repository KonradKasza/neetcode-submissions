class NumMatrix {
private:
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int result = 0;

        for(int j = row1; j<=row2; j++){
            for(int i = col1; i<=col2; i++){
                result += mat[j][i];
            }
        }
        return result;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */