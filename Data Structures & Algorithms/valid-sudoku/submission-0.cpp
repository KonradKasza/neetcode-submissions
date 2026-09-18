#include <set>
class Solution {
public:
    int regionNumber(int i, int j){
        return (i/3)*3 + (j)/3;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        char columns[9][9]={0};
        char rows[9][9]={0};
        char regions[9][9]={0};

        for(int j = 0; j < 9 ; j++){
            for(int i = 0; i < 9 ; i++){
                if(board[i][j] == '.') continue;
                const int value = board[i][j] - '1';
                const int region = regionNumber(i,j);
                if(columns[value][j] > 0 || rows[i][value] > 0 || regions[region][value] > 0) return false;
                columns[value][j] = 1;
                rows[i][value] = 1;
                regions[region][value] = 1;
            }
        }
        return true;
    }
};
