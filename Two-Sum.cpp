class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> indexMap; // Store value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (indexMap.find(complement) != indexMap.end()) {
                return {indexMap[complement], i}; 
            }

            indexMap[nums[i]] = i;
        }
        return {}; // No valid pair found
    }
};