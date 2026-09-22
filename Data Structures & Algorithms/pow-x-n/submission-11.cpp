#include <cmath>
    class Solution {
private:
    double calc(double x, long long n){
        if (n==0) return 1;
        double half = calc(x, n / 2);
        return (n & 1) ? x * half * half : half * half;
    }

public:
    double myPow(double x, int n) {
        long long e = n;
        if(e < 0){
            x = 1.0/x;
            e=-e;
        }
        return calc(x, e);    }
};
