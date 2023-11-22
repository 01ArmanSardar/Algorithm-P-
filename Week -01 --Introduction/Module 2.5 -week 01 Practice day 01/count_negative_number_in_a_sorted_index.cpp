class Solution {
public:
//this is binary search method , and this program time complexity is O(nlogn);
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
       for (auto &row:grid)
       {
         int idx=  upper_bound(begin(row),end(row),0,greater<int>())-begin(row);
         count+=(n-idx);
       }
       return count;
    }
};

//brute force method 

