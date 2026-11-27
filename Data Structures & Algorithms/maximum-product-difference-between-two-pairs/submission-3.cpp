class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int s1,s2,m1,m2;
        s1 = s2 = INT_MAX;
        m1 = m2 = -INT_MAX;
        for(int i = 0;i<nums.size();i++){
            int temp = nums[i];
            if(temp < s2){
                if(temp < s1){
                    s2 = s1;
                    s1 = temp;
                } else {
                    s2 = temp;
                }
            } if(temp > m1){
                if(temp > m2){
                    m1 = m2;
                    m2 = temp;
                } else {
                    m1 = temp;
                }
            }
        }
        std::cout << s1 <<" ," << s2 <<" ,"<<m1 <<" ,"<<m2 <<" ,";
        return (m1*m2)-(s1*s2);
    }
};