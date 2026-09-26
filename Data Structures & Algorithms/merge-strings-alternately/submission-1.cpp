class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0;
        while (word1.size() > i && word2.size() > i){
            res += word1[i];
            res += word2[i];
            i++;
        }
        while (i < word1.size() || i < word2.size()){
            if(word1.size() > i){
                res += word1[i];
            } else {
                res += word2[i];
            }
            i++;
        }
        return res;
    }
};