class Solution {
public:
    int lengthOfLastWord(string s) {
        int curr = 0;
        for(int i = s.size()-1; i >= 0; i-- ){
            if(s[i] == ' ' && curr == 0) continue;
            else if(s[i] == ' ') break;
            curr++;
        }
        return curr;
    }
};