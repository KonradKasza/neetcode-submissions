class Solution {
public:
    int scoreOfString(string s) {
        if(s.size()<=1) return 0;
        int score=0;
        for(int i=1; i< s.size();i++){
            score+= std::abs(static_cast<char>(s[i])-static_cast<char>(s[i-1]));

        }

        return score;
    }
};