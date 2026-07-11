class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxArea = 0;
        int l = 0;
        int r=nums.size()-1;
        while (l<r){
            if(nums[l]<nums[r]){
                maxArea = max(maxArea,min(nums[l],nums[r])*(r-l));
                l++;
            }else{
                maxArea = max(maxArea,min(nums[l],nums[r])*(r-l));
                r--;
            }
        }
        
        return maxArea;
    }
};