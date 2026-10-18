class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> s;
        for(int each : nums){
            s.insert(each);
        }

        int max = 0;
        for(auto& each : s){
            if (s.count(each-1) < 1){
                int i = 1;
                while(s.count(each+i)){
                    i++;
                }
                if (max < i) max = i;
            }
        }
        return max;
    }
};
