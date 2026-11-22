#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        string t;

        for(unsigned char c:s){
            if(isalnum(c))
                t+=tolower(c);
        }

        int n=t.length();
        for(int i=0;i<n/2;i++){
            if(t[i]!=t[n-i-1])
                return false;
        }

        return true;
    }
};