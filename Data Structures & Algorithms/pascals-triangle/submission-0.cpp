class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        if(numRows == 1) return {{1}};

        res.push_back( {1} );

        for(int j = 1; j < numRows ; j++){
            vector<int> temp;
            temp.push_back(1);
            for(int i = 1; i < j; i++){
                temp.push_back(res[j-1][i-1] + res[j-1][i]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};