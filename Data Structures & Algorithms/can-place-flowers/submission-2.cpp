class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool lastPlaced = false;
        int size = flowerbed.size();
        for(int i = 0 ; i < size; i++){
            if(lastPlaced){
                lastPlaced = false;
                continue;
            }
            if(flowerbed[i] == 1){
                lastPlaced = true;
                continue;
            }
            if(i - 1 >= 0 && flowerbed[i-1] == 1){
                continue;
            }
            if(i + 1 < size && flowerbed[i+1] == 1){
                continue;
            }
            n--;
            lastPlaced = true;
        }
        return n <= 0;
    }
};