class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> excludedCols;
        unordered_set<int> excludedRows;

        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j< colSize; j++){
                if( matrix[i][j] == 0 ){
                    excludedRows.insert(i);
                    excludedCols.insert(j);
                }
            }
        }


        for(auto& each : excludedCols){
            for(int i = 0; i<rowSize; i++){
                matrix[i][each] = 0;
            }
        }


        for(auto& each : excludedRows){
            for(int i = 0; i<colSize; i++){
                matrix[each][i] = 0;
            }
        }
    }
};
