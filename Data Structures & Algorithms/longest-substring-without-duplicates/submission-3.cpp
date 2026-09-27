#include<unordered_set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> letters;
        int max = 0;
        int current = 0;
        int left = 0;

        for( int i = 0; i < s.size(); i++){

            if( letters.contains(s[i])){
                while (letters.contains(s[i])){
                    letters.erase(s[left]);
                    left++;
                }
            }
            letters.insert(s[i]);
            if (max < i-left+1) max = i-left+1;

        }   
        return max;
    }
};
