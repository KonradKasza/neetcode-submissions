class Solution {
public:
    int mySqrt(int x) {
        int left =0;
        int right = x;
        long long mid = (left+right)/2;

        while( left <= right ){
            if(mid*mid > x){
                right = mid-1;
            } else left = mid+1;
            mid = (left+right)/2;
        }
        return right;
    }
};