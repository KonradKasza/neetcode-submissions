class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int left = 1;
        int right = 1; 
        int k = 1;

        while(right <= nums.size()-1){
            if(nums[left-1] == nums[right]){
                right++;
            } else{
                nums[left] = nums[right];
                left++;
                right++;
                k++;
            }
        }
        return k;
    }
};