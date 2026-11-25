class Solution {
public:
    int trap(vector<int>& height) {
        int st=0;
        int dr=height.size()-1;
        int water=0;
        int st_max=height[st],dr_max=height[dr];
        while(st<dr){
            if(st_max<dr_max){
                st++;
                st_max=max(st_max,height[st]);
                water+=st_max-height[st];
            }
            else{
                dr--;
                dr_max=max(dr_max,height[dr]);
                water+=dr_max-height[dr];
            }

        }
    return water;
    }
};
