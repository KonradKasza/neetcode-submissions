class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> hmap;
        for( int i = 0; i < nums.size() ; i++){
            int index = nums[i];
            if(hmap.contains(index)){
                if (std::abs(hmap[index] - i) <= k) return true;
            }
            hmap[index] = i;
        }   
        return false;
    }
};