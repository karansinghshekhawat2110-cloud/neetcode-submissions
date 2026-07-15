class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            ans+=to_string(strs[i].length())+"#"+strs[i];

        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>ans;
        int n=0;
        while(i<s.length()){
            if(s[i]=='#'){
                ans.push_back(s.substr(i+1,n));
                i+=n+1;
                n=0;
            }
           else {n=n*10+(s[i]-'0');++i;
}
        }
        return ans;
    }
};
