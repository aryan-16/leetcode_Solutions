class Solution {
public:
   int find(vector<int>&nums , int low , int high , int target){
   int  mid = (low+high)/2;
       if(low>high) return -1;
       if(nums[mid]==target) return mid;
       else if(nums[mid]>target) return find(nums , low , mid-1,target);

       return find(nums ,mid+1 , high , target);
       
   }
    int search(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size() -1;
       return find(nums ,low , high,target);
    }
};