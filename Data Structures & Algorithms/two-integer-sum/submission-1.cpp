#include <unordered_map>
// i used map to avoid n^2 time complex
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;        
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]] = i;
        }
        for(int i = 0 ; i < nums.size(); i++){
            int diff = target - nums[i];
            if(map.count(diff) != 0 && i != map.at(diff)) return std::vector<int>{i,map.at(diff)};
        }
        return std::vector<int>{-1,-1};
    }
};
