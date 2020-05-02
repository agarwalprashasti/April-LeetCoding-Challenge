/*
   If all no. are repeated twice except for one number we can take the XOR of all numbers. So only one number is left in the end.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        for(int i=1;i<n;i++)
        {
            res=res^nums[i];
        }
        return res;
    }
};