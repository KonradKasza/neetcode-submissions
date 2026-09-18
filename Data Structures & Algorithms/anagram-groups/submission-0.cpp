#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> hmap;
        vector<vector<string>> output;

        for ( auto& each : strs ){
            char temp[26] = {0};
            for(auto& character : each){
                int index = character-'a';
                temp[index] = temp[index]+1;
            }
            string element(temp,26);
            hmap[element].push_back(each);
        }
        for(auto& eachGroup : hmap){
            output.push_back(std::move(eachGroup.second));
        }   
        return output;
    }
};
