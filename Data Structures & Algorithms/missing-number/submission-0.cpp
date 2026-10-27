class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int totalSumInRange = 0;
        int sum = 0;
        int i;
        for(i = 0; i < size; i++){
            sum += nums[i];
            totalSumInRange+=i;
        }
        totalSumInRange+=i;
        return totalSumInRange-sum;
    }
};
