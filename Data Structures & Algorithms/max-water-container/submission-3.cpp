class Solution {
public:
    int getVolume(vector<int>& h, int a, int b){
        int height = std::min(h[a],h[b]);
        return height*(b-a);
    }
    int maxArea(vector<int>& heights) {
        int max = 0;
        int left = 0;
        int right = heights.size()-1;

        while (left < right){
            int temp = getVolume(heights,left,right);
            if(temp > max) max=temp;
            

            if(heights[left] < heights[right]){
                left++;
            } else right--;
        }
        return max;
    }
};
