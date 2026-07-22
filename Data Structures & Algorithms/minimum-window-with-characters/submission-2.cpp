class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>a(128,0);
        vector<int>b(128,0);

        for(int i=0;i<t.length();i++){
            a[t[i]]++;
        }
        int i=0;int j=0;
        string ans=s+" ";
        while(j<s.length()){
            int cnt=0;
            b[s[j]]++;
            for(int i=0;i<128;i++){
                if(a[i]>b[i]){
                    cnt=1;break;
                }

            }
            if(cnt==0){
                while(a[s[i]]==0 || b[s[i]]>a[s[i]]){b[s[i]]--;++i;}
                string l=s.substr(i,j-i+1);
                if(l.length()<ans.length())ans=l;
               b[s[i]]--; ++i;
                while(b[s[i]]>a[s[i]]){ b[s[i]]--;++i;}

            }
           ++j;

        }
        while(i<s.length()){
            int cnt=0;
           
            for(int i=0;i<128;i++){
                if(a[i]>b[i]){
                    cnt=1;break;
                }

            }
            if(cnt==0){
             string l=s.substr(i,j-i);
                if(l.length()<ans.length())ans=l;
        }
        b[s[i]]--;++i;
        }

        if(ans==s+" ")return "";
        return ans;
    }
};