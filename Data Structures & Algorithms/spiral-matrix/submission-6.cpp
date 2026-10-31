class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int iterations = std::min(rows, cols)/2;
        bool odd = std::min(rows, cols)%2;
        
        for(int i = 0; i < iterations; i++){
            int x = i;
            int y = i;

            // 1 2 3 4
            // 5 6 7 8
            // 9 A B C
            // D E F 0
            
            // RIGHT ->
            while (y < cols - i) {
                res.push_back(matrix[x][y++]);
            }
            y--;
            x++;

            // DOWN
            while (x < rows - i) {
                res.push_back(matrix[x++][y]);
            }
            x--;
            y--;

            // LEFT <-
            while (y >= i) {
                res.push_back(matrix[x][y--]);
            }
            y++;
            x--;

            // UP
            while (x > i) {
                res.push_back(matrix[x--][y]);
            }
        }

        if(odd){
            int i = iterations;

            if(rows < cols){
                for(int y=i; y<cols-i;y++) res.push_back(matrix[i][y]);
            } else {
                for(int x=i; x<rows-i;x++) res.push_back(matrix[x][i]);
            }
        }
        return res;
    }
};
