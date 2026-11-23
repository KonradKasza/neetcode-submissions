class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;

        for(auto& each : nums){
            m[each]++;    
        }
        vector<pair<int,int>> items(m.begin(),m.end());
        std::sort(items.begin(), items.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> res;
        int limit = std::min(k,static_cast<int>(items.size()));
        for( int i =0; i< limit; i++){
            res.push_back(items[i].first);
        }
        return res;
    }
};
