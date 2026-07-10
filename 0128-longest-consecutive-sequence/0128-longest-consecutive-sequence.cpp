class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxL=1;
        int curr=1;
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                continue;
            }else if(nums[i]==(nums[i-1])+1){
                curr++;
            }else{
                maxL = max(maxL,curr);
                curr=1;
            }
        }
        maxL=max(maxL,curr);
        return maxL;
    }
};