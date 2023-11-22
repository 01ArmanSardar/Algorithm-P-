//this leetcode problem
class Solution {
public:
    int maximumCount(vector<int>& nums)
     {
        //this is brute force method
        //this program time complextity O(n)
         int n=nums.size();
        int poscnt=0;
        int negcnt=0;
    for (int i=0;i<n;i++)

    {
        if (nums[i]>0) 
      {
          poscnt++;
      }
      else if (nums[i]<0)
      {
           negcnt++;
      }
    }
      return max(poscnt,negcnt);
    }
};

//there is binary search method
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        //this program time complexity O(logn)
     int n = nums.size();
     int fastpos = lower_bound(nums.begin(),nums.end(),1)-nums.begin();
    int fastzero = lower_bound(nums.begin(),nums.end(),0)-nums.begin();
  return  max(n-fastpos,fastzero);

    }
};