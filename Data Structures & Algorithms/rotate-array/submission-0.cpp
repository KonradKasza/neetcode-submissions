class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> n;
        int size = nums.size();
        if(size == 0 || k == 0) return;
        k %= size;
        for(int i = size - k; i < size; i++){
            n.push_back(nums[i]);
        }
        for(int i = size-1; i>=k; i--){
            nums[i] = nums[i-k];    
        }

        for(int i = 0; i < k; i++){
            nums[i] = n[i];
        }
    }
};