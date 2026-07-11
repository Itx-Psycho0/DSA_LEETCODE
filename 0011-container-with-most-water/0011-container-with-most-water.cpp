class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxArea = 0;
        int l = 0;
        int r=nums.size()-1;
        while (l<r){
            maxArea = max(maxArea,min(nums[l],nums[r])*(r-l));
            if(nums[l]<nums[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};