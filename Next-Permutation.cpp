class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        // Step 1: Find the first decreasing element from the right
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                ind = i;
                break; // Fix: break inside the if block
            }
        }

        if(ind != -1) { 
            // Step 2: Find the smallest number larger than nums[ind] from the right
            for(int i = n - 1; i > ind; i--) {
                if(nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]); // Fix: Swap nums[ind] with correct number
                    break; 
                }
            }
        }
        
        // Step 3: Reverse the remaining part to get the next permutation
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
