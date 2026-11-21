#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ang;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
            ang[s[i]]++;
        for(int i=0;i<t.length();i++) {
            if(ang[t[i]]==0)
                return false;
            ang[t[i]]--;
        }
        return true;
    }
};
