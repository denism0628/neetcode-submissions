#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sum;
        for(int i=0;i<nums.size();i++){
            int other=target-nums[i];
            if(sum.find(other)!= sum.end()){
                return {sum[other],i};
            }
            sum[nums[i]]=i;
        }
        return {};
    }
};