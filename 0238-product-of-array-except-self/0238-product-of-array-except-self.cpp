class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size(), 1);

        for(int i=1; i< nums.size(); i++){
            left[i]=left[i-1]* nums[i-1];
        }
        vector<int>output(nums.size());
        int right=1;
        for(int i = nums.size()-1; i>=0; i--){
            output[i]=left[i]*right;
            right*=nums[i];
        }
        return output;
    }
};