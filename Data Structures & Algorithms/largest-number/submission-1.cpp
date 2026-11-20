class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string result;

        vector<string> arr;
        for( auto& each : nums ){
            arr.push_back( std::to_string(each));
        }

        for( int i = 0; i < nums.size()-1; i++ ){
            for( int j = 0; j < nums.size()-i-1; j++){
                if( arr[j+1] + arr[j] > arr[j] + arr[j+1]) std::swap(arr[j], arr[j+1]);
            }
        }
        if(arr[0] == "0") return "0";
        for(auto& each:arr){
            result+=each;
        }
        return result;
    }
};