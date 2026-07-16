class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int x=1;
            if(st.find(nums[i]-1)==st.end()){
                
                while(st.find(nums[i]+1)!=st.end()){
                    ++x;nums[i]++;
                }
            }
            maxi=max(maxi,x);
        }
        return maxi;
    }
};
