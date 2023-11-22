class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int ExpactedTotal= (n*(n+1))/2;
        int total=0;
        for (int num :nums)
        {
            //this code time complaxity is O(n)
            total+=num;
        }
        return ExpactedTotal -total;
    }
};