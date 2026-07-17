class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;int j=heights.size()-1;
        int maxi=0;
        while(i<j){
            maxi=max(maxi,(min(heights[i] , heights[j])*(j-i)));
            if(heights[i]<heights[j]){
                int h=heights[i];
                while(i<j){
                    if(heights[i]<=h)++i;
                    else break;
                }
            }
            else{
                 int h=heights[j];
                while(i<j){
                    if(heights[j]<=h)--j;
                    else break;
                }
            }

        }

        return maxi;
    }
};
