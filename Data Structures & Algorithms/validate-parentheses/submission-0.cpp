class Solution {
public:
    bool isValid(string s) {
        stack<char>par;
        unordered_map<char,char> closed={
            {')','('},
            {']','['},
            {'}','{'}
        };
        for(char c: s){
            if(closed.count(c)){
                if(!par.empty() && closed[c]==par.top())
                    par.pop();
                else 
                    return false;
            }
            else par.push(c);
        }
    return par.empty();
    }
};
