class Solution {
public:
    int countOnes(int x){
        int count = 0;
        for(int i = 1; i <= x; i*=2){
            if(x & i) count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> count;
        for(int i = 0; i <= n; i++){
            count.push_back(countOnes(i));
        }
        return count;
    }
};
