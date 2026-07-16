class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x=0;int y=numbers.size()-1;
        while(x<y){
            if(target>numbers[x]+numbers[y]){
               ++x;
            }
            else if(target<numbers[x]+numbers[y])--y;
            else return {x+1,y+1};
        }
return {1};
    }
};
