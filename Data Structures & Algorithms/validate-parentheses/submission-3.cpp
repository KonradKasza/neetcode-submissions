#include <stack>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stos;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') stos.push(s[i]);
            if(s[i] == ')'){
                if(!stos.empty() && stos.top() == '(') stos.pop();
                else return false; 
            }
            else if(s[i] == ']'){
                if(!stos.empty() && stos.top() == '[') stos.pop();
                else return false; 
            }
            else if(s[i] == '}'){
                if(!stos.empty() && stos.top() == '{') stos.pop();
                else return false;
            }
        }
        if (stos.empty()) return true;
        return false;
    }
};
