class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::multiset<int> s(people.begin(),people.end());
        int result = 0;
        while(!s.empty()){
            auto it = prev(s.end());

            int largest = *it;
            s.erase(it);

            auto c = s.upper_bound(limit-largest);
            if(c!=s.begin()){
                --c;
                s.erase(c);
            }
            result++;
        }
        return result;
    }
};