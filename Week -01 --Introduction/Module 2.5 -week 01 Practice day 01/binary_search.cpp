class Solution {
public:
    int search(vector<int>& nums, int target) {
      int s=0;
      int e=nums.size()-1;
      while (s<=e)
      {
        //this code time complexity is O{logn};
        int mid=s+(e-s)/2;
        int x=nums[mid];
        if (x==target)  return mid;
        if (target<x) e=mid-1;
        if (target>x) s=mid+1;

      }  
      return -1;
    }
};