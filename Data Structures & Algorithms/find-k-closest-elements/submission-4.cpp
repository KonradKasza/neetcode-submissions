class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if (k == 0) return vector<int>{};
        int left = 0;
        int right = arr.size()-1;

        int mid;
        while (left <= right){
            mid = left + (right-left)/2;
            if(arr[mid] > x){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }

        right = left-1;

        int i = 0;
        while (i < k){
            if(left-1 < 0){
                if(right+1 >= arr.size()){
                    break;
                }
                else right++;
            }
            else if(right+1 >= arr.size()){
                left--;
            }
            else if(x - arr[left-1] <= arr[right+1] - x){
                left--;
            } else right++;
            i++;
        cerr << "left: " << left << '\n';
        cerr << "right: " << right << '\n';
        cerr << "size: " << arr.size() << '\n';
        }
        return vector<int>(arr.begin()+left, arr.begin()+right+1);
    }
};