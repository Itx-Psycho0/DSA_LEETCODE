class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int l1=0;
        int h1=nums.size()-1;
        int f=-1;
        int last=-1;
        while (l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                f=mid;
                h=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                h=mid-1;
            }

        }
        while (l1<=h1){
            int mid=l1+(h1-l1)/2;
            if(nums[mid]==target){
                last=mid;
                l1=mid+1;
            }else if(nums[mid]<target){
                l1=mid+1;
            }else{
                h1=mid-1;
            }

        } 
        return {f,last} ;
    }
};