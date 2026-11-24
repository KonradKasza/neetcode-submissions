class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";
        for (string each : strs) {
            string temp = "";
            temp += "#";
            temp += std::to_string(each.size());
            temp += "#";
            for (auto character : each) {
                temp += character;
            }
            result += temp;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < static_cast<int>(s.size())) {
            i++;
            int len = 0;
            while (i < static_cast<int>(s.size()) && s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++;
            result.push_back(s.substr(i, len));
            i += len;
        }
        return result;
    }
};