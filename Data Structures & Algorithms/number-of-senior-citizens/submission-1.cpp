class Solution {
public:
    int countSeniors(vector<string>& details) {
        int result = 0;
        for(const string &each : details){
            
            int age = stoi(each.substr(11,2));

            if(age>60)result++;
        }
        return result;
    }
};