class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int orSum = 0;
        for (int num : nums) {
            orSum |= num;
        }
        return orSum << (nums.size() - 1);
    }
};