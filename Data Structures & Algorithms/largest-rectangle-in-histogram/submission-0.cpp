class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>>st;
        vector<int>l;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(st.empty())l.push_back(-1);
            else l.push_back(st.top().second);

            st.push({heights[i],i});
        }

         while(!st.empty())st.pop();
        int maxi=0;
        for(int i=n-1;i>=0;i--){
             while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
             int a=heights[i];
            if(st.empty()){
           
            a=a*(i-l[i] + n -i-1);
            }
            else{
           
            a=a*(i-l[i] + st.top().second -i-1);
            }
            maxi=max(maxi,a);
            st.push({heights[i], i});
        }
        return maxi;

    }
};
