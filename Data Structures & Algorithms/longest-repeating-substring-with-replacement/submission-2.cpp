class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0;
        for(int i=0;i<26;i++){
            int l=0;int r=0;
            int n=k;int ans=0;
            char a='A'+ i;
           if (s.find(a) == string::npos) continue;
            while(r<s.size()){
                if(s[r]==a){++ans;++r;maxi=max(ans,maxi);}
                else if(n>0){--n;ans++;++r;maxi=max(ans,maxi);}
                else{
                    while(s[l]==a && l<r ){
                        ++l;--ans;
                    }
                    if(l==r){ans=0;++r;++l;}
                    else{
                        --ans;++n;++l;
                    }
                }
            }

        }  
        return maxi; 
    }
};
