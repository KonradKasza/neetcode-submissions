class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r = 0;
        for(int i = 0; i < mat.size();i++){
            r+=mat[i][i];
        }
        for(int i = 0; i < mat.size();i++){
            r+=mat[mat.size() - i - 1][i];
        }
        if(mat.size()%2 == 1){
            r-=mat[mat.size()/2][mat.size()/2];
        }
        return r;
    }
};