class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;
        int n = word.size(), m=abbr.size();

        while (i < n && j < m) {
            if (isdigit(static_cast<unsigned char>(abbr[j]))) {
                if (abbr[j] == '0') return false; // no leading zeros

                int skip = 0;
                while (j < m && isdigit(static_cast<unsigned char>(abbr[j]))) {
                    skip = skip * 10 + (abbr[j] - '0');
                    j++;
                }
                i += skip;
            } else {
                if (word[i] != abbr[j]) return false;
                i++;
                j++;
            }
        }
        
        return i == n && j == m;
    }
};