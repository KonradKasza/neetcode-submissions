class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::map<int,int> m;

        for(auto& each : nums1){
            m[each[0]] += each[1];
        }
        for(auto& each : nums2){
            m[each[0]] += each[1];
        }

        std::vector<std::vector<int>> res;
        for(std::pair<int,int> each : m){
            res.push_back({each.first, each.second});
        }
        return res;
    }
};
