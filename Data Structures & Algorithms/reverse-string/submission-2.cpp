
class Solution {
public:
    void reverseString(vector<char>& s) {
        char left = 0;
        char right = s.size()-1;

        while (left <= right){
            std::swap(s[left],s[right]);
            left++;
            right--;
        }

    }
};