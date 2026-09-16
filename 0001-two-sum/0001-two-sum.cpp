class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //input
        unordered_map<int,int>hashtable;
      //what dsa to use - Hashtable
      for(int i=0;i<nums.size();i++ ){  
      int complement = target - nums[i];

      if(hashtable.count(complement)){
        return{hashtable[complement],i};
      }
        hashtable[nums[i]] = i;
    }
    return {};
}};