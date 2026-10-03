class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {  
        string result = "";
        int maxSize = strs[0].size();
        for(int i = 0; i < maxSize; i++){
            char s = static_cast<char>(strs[0][i]);
            for( string each : strs ){
                if(!each[i]) return result;
                if(each[i] != s){
                    return result;
                }
            }
            result += s;
        }
        return result;
    }
};