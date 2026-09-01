class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int pivot = 0;
        while (pivot <= high){
            if(nums[pivot]==1){
                pivot++;
            }else if(nums[pivot]==0){
                swap(nums[pivot],nums[low]);
                low++;
                pivot++;
            }else{
                swap(nums[pivot],nums[high]);
                high--;
            }
        }
    }
};