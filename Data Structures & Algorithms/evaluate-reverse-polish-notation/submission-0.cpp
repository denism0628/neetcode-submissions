class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;

        for(string& s:tokens){
            if(s!="+" && s!="-" && s!="*" && s!="/")
                numbers.push(stoi(s));
            else if(s=="+"){
                int a=numbers.top();
                numbers.pop();
                int b=numbers.top();
                numbers.pop();
                numbers.push(b+a);
            }
            else if(s=="*"){
                int a=numbers.top();
                numbers.pop();
                int b=numbers.top();
                numbers.pop();
                numbers.push(b*a);
            }
            else if(s=="/"){
                int a=numbers.top();
                numbers.pop();
                int b=numbers.top();
                numbers.pop();
                numbers.push(b/a);
            }
            else if(s=="-"){
                int a=numbers.top();
                numbers.pop();
                int b=numbers.top();
                numbers.pop();
                numbers.push(b-a);
            }
        }
        return numbers.top();
    }
};
