class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nowa;
        int zeros = 0;

        for(auto& e: nums){
            if(e == 0) zeros++;
            else nowa.push_back(e);
        }
        
        int i;
        for(i = 0; i<nowa.size();i++){
            nums[i] = nowa[i];

        }

        while(zeros > 0){
            nums[i++] = 0;
            zeros--;
        }
    }
};