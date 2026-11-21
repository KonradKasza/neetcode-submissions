class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        std::sort(words.begin(), words.end(), [](const string& a, const string& b){
            return a.length() < b.length();
        });

        vector<string> res;
        for(int i = 0 ; i<words.size()-1; i++){
            bool found = false;
            for(int j = i+1; j< words.size() && !found; j++){
                
                for(int k = 0; k <= words[j].size() - words[i].size(); k++){
                    bool match = true;
                    for(int l = 0; l < words[i].size(); l++){
                        if( words[j][k+l] != words[i][l]){
                            match = false;
                            break;
                        }
                    }
                    if(match){
                        res.push_back(words[i]);   
                        found = true;
                        break;
                    }
                }
            }
        }
        return res;
    }
};