class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i = 0;
        int n = nums.size();
        
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n - 1]; // Replace current element with the last one
                n--; // Reduce array size (ignoring the last value now)
            } else {
                i++; // Move to next only if current is not val
            }
        }
        return n; // New size of the array with val removed
    }
};