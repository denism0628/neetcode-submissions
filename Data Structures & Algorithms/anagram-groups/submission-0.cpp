#include<vector>
#include<string>
#include<unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>>groups;

        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            groups[key].push_back(s);
        }
        for(auto pairs:groups)
            res.push_back(pairs.second);
    return res;
    }
};