class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> styrta;

        for (int n : stones){
            styrta.push(n);
        }

        //simulation
        while (styrta.size()>1){
            int result = styrta.top();
            styrta.pop();
            result -= styrta.top();
            styrta.pop();
            styrta.push(result);
        }
        return styrta.top();
    }
};
