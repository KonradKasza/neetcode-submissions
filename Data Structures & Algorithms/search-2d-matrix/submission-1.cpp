class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        // to use binar search once, we treat is as 1d matrix
        int left = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int right = n*m-1;

        //formula for finding out index for X: matrix[X/n][X%m]
        while (left <= right){
            int mid = left + (right-left)/2;
            int val = matrix[mid/m][mid%m];
            if( val > target ){
                right = mid - 1;
            } else if (val < target){
                left = mid + 1;
            } else{
                return true;
            }
        }
        return false;
    }
};
