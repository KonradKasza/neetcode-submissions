class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for ( auto& each : nums ){
            res ^= each;
        }
        return res;
    }
};
