class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>arr;
        int  ans=0;
        int maxi=0;
       int i=0;int j=0;
       while( j<s.length()){
            arr[s[j]]++;
            if(arr[s[j]]==1){ans++;maxi=max(maxi,ans);++j;}
            else{
                while(i<j && s[i]!=s[j]){
                    arr[s[i]]--;
                    ++i;ans--;
                    
                }
                arr[s[i]]--;
                ++i;++j;
            }

       }
       return maxi;
    }
};
