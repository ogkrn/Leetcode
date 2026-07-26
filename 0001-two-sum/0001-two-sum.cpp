class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // input 
        unordered_map<int, int>hashTable;

        // What dsa to use : Hashtable
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];

            if (hashTable.count(complement)){ //count() checks if the key is in the hashmap.
                return{hashTable[complement],i};
            }
        hashTable[nums[i]] = i;
        }

        // What to do with data:
             return{};

        //output
    }
};