class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>p;
        for(int i=0;i<strs.size();i++){
            vector<int>f(26,0);
            for(int j=0;j<strs[i].size();j++){
                    f[strs[i][j]-'a']++;
            }
            string s="";
            for(int k=0;k<26;k++){
                s+="#"+to_string(f[k]);
            }

            p[s].push_back(strs[i]);
        }

        vector<vector<string>>ans;
        for(auto i:p){
            ans.push_back(i.second);
        }
        return ans;
    }
};
