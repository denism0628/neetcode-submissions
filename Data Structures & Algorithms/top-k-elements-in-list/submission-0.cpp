#include<vector>
#include<unordered_map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> cnt;
        vector<pair<int,int>> v;

        for(int num:nums)
            cnt[num]++;

        for(auto p:cnt)
            v.push_back({p.second,p.first});
        sort(v.rbegin(),v.rend());

        for(int i=0;i<k;i++)
            res.push_back(v[i].second);
        return res;
    }
};
