class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        int max = -1;

        for(int i = size-1; i>=0 ;i--){
            int temp = arr[i];
            arr[i] = max;
            max = std::max(max,temp);
        }
        return arr;
    }
};