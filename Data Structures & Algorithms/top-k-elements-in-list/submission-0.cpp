class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
        }
    priority_queue<pair<int,int>>pq;

        for(auto i:p){
            pq.push({i.second,i.first});
        }

        vector<int>ans;
        for(int i=0;i<k;i++){
            int p=pq.top().second;
            pq.pop();
            ans.push_back(p);
        }
        return ans;
    }
};
