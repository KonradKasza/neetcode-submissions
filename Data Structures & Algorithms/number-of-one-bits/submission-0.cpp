class Solution { 
public:
    int hammingWeight(uint32_t n) {
        int numOfOnes = 0;

        
        for(int i = 1; i <= n; i*=2){
            if(i & n){
                numOfOnes++;
            } 
        }
        return numOfOnes;
    }
};
