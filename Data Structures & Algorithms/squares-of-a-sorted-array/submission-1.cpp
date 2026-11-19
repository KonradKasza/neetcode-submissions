#include<cmath>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squared;
        
        //find out smallest negative element 
        int left = 0;
        for( int i = 0; i<nums.size() && nums[i] < 0; i++){
            left = i;   
        }

        int right = left + 1;

        std::cout << left << " " << right << std::endl;
        
        while ( left >= 0  ||  right < nums.size()){
            if( right < nums.size() ){
                if( left >= 0 ){
                    if(std::abs(nums[left]) < std::abs(nums[right]) ){
                        squared.push_back(nums[left]*nums[left]);
                        left--;       
                    } else {
                        squared.push_back(nums[right]*nums[right]);
                        right++;    
                    }
                } else {
                    squared.push_back(nums[right]*nums[right]);
                    right++;
                }
            } else {
                squared.push_back(nums[left]*nums[left]);
                left--;
            }
        }
        return squared;
    }
};