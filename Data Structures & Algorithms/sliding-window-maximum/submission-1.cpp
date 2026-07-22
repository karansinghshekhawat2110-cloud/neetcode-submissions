class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k<=1 || (int)nums.size()==0)return nums;
        int i=0;int j=0;
        deque<pair<int,int>>q;

        vector<int>ans;

        while(j<k){
          while(!q.empty() && q.back().first < nums[j]){
            q.pop_back();
          }
          q.push_back({nums[j],j});
          ++j;
        }
        ans.push_back(q.front().first);
        while(j<nums.size()){
            while(!q.empty() && q.back().first < nums[j]){
            q.pop_back();
          }
         q.push_back({nums[j],j});
         if(q.front().second==i){q.pop_front();}
         ans.push_back(q.front().first);
         ++j;++i;
        }
        return ans;

    }
};
