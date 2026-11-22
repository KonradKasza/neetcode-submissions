#include<cmath>

class Solution {
public:
    bool isPerfectSquare(int num) {
        int m = std::sqrt(num);
        return m*m == num;        
    }
};