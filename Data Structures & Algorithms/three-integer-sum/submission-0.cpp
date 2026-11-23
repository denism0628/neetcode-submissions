class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int st=i+1;
            int dr=nums.size()-1;
            while(st<dr){
                int sum=nums[i]+nums[st]+nums[dr];
                if(sum>0)
                    dr--;
                else if(sum<0)
                    st++;
                else{
                    res.push_back({nums[i],nums[st],nums[dr]});
                    st++;
                    dr--;
                    while(st<dr && nums[st]==nums[st-1])
                        st++;
                }
            }
        }
    return res;
    }
};
