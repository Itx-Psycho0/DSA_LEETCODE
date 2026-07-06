class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int h=x;
        int ans=0;
        if(x==0){
            return 0;
        }
        if(x<4){
            return 1;
        }
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid>x/mid){
                h=mid-1;
            }else{
                ans=mid;
                l=mid+1;

            }
        }
        return ans;
    }
};