#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(int i=0;i<nums.size();i++){
            duplicate[nums[i]]++;
            if(duplicate[nums[i]]==2)
               return true;
        }
    return false;
    }
};