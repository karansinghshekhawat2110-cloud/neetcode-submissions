class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<float,int>>p;
        for(int i=0;i<position.size();i++){
            p.push_back({(float)position[i],speed[i]});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();i++){
            p[i].first=((target-p[i].first)/(p[i].second*1.0));
        }

        int cnt=1;
        int n=p.size()-1;
        float mini=p[n].first*1.0;
        for(int i=p.size()-2;i>=0;i--){
            if(p[i].first>mini){
                mini=p[i].first;
                ++cnt;
            }

        }
        return cnt;
    }
};
