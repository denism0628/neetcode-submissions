#include<vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0;
        vector<int>output(nums.size(),0);
        for(int nr:nums)
            if(nr==0)  zeros++;
        
        if(zeros>=2)   return output;
        long long p=1;
        for(int nr:nums)
            if(nr)
             p*=nr;

        for(int i=0;i<nums.size();i++){
            if(zeros==0)
                output[i]=p/nums[i];
            else if(nums[i]==0)
                output[i]=p;
        }
    return output;
    }
};
