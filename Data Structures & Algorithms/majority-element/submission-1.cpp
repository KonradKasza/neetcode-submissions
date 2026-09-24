class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> hmap;
        
        int maxCount=0;
        int result=-1;

        for( auto& each : nums ){
            if(hmap.count(each) > 0){
                hmap.at(each)++;
            }
            else{
                hmap[each] = 1;
            }
            if (hmap.at(each) > maxCount){
                maxCount = hmap.at(each);
                result = each;
            }
        }

        return result;
    }
};