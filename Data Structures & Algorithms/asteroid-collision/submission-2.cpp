class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        //2,4,-3,-1,7,-8,0,10,-9
        //2,4 -> -3, -1 , no pop | 
        //2,4,7 -> -8 pop x3

        std::vector<int> remaining;

        for(int ast : asteroids){
            bool destroyed = false; 

            while(!destroyed && ast<0 && !remaining.empty() && remaining.back()>0){
                if(remaining.back() < -ast){
                    remaining.pop_back();
                } else if(remaining.back() == -ast){
                    remaining.pop_back();
                    destroyed = true;
                } else {
                    destroyed = true;
                }
            }
            if (!destroyed){
                remaining.push_back(ast);
            }
        }
        return remaining;
    }
};