class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=1;
        vector<int>arr(nums.size()+1,1);
        for(int i=nums.size()-1;i>=0;i--){
            l*=nums[i];
            arr[i]=l;
        }
        l=1;
        for(int i=0;i<nums.size();i++){
           
           arr[i]=l*arr[i+1];
            l*=nums[i];
        }
        arr.pop_back();
        return arr;
    }
};
