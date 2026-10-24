class Solution {
public:
    bool checkEdgeCase(string s, int left, int right){
        int case1left = left;
        int case1right = right-1;

        int case2left = left+1;
        int case2right = right;
        
        bool result1 = true;
        bool result2 = true;
        

        while(case1left < case1right){
            if(s[case1left] == s[case1right]){
                case1left++;
                case1right--;
            }
            else {
                result1 = false;
                break;
            }
        }
        while(case2left < case2right){
            if(s[case2left] == s[case2right]){
                case2left++;
                case2right--;
            }
            else {
                result2 = false;
                break;
            }
        }
        if (result1 || result2) return true;
        return false;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        bool skipped = false;
        while ( left < right ){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else return checkEdgeCase(s,left,right);
        }
        return true;
    }
};