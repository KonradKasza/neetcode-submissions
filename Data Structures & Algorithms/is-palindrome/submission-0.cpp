class Solution {
public:
    bool isPalindrome(string s) {
        string c = "";

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z') c+= s[i];
            if(s[i] >= 'A' && s[i] <= 'Z') c+= s[i] - ('A' - 'a');
            if(s[i] >= '0' && s[i] <= '9') c+= s[i];
        }
        
        int left = 0;
        int right = c.size()-1;

        while(left <= right){
            if(c[left] != c[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};
