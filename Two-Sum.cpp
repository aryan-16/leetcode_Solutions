class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
};