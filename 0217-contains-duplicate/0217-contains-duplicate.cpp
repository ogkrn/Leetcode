class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>megaset;
        for(int i=0;i<nums.size();i++){
            if(megaset.count(nums[i])){
                return true;
            }
            megaset.insert(nums[i]);
        }
            return false;
    }
};