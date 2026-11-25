class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st=0;
        int dr=heights.size()-1;
        int max_area=0;
        while(st<dr){
            int width=abs(st-dr);
            int height=min(heights[st],heights[dr]);
            
            max_area=max(max_area,width*height);
            if(heights[st]<=heights[dr])
                st++;
            else
                dr--;
        }
    return max_area;
    }
};
