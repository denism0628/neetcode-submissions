class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0;
        int dr=numbers.size()-1;
        while(st<dr){
            int suma=numbers[st]+numbers[dr];
            if(suma==target)
                return {st+1,dr+1};
            else if(suma>target)
                    dr--;
             else
                    st++;
                
        }
    return {};
    }
};
