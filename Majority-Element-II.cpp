class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> freqMap;
        int n = nums.size();
        vector<int> ans;
        int floorN = floor(n/3);
        for (int num : nums){
            freqMap[num]++;
        }
        for(auto it: freqMap){
            if(it.second >floorN){
                ans.push_back(it.first);
            }
        }
        return ans;

    }
};