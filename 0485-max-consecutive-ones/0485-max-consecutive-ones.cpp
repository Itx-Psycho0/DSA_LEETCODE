class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int ans = 0;
        for(int v : nums){
            if(v!=1){
                ans = max(ans, c);
                c =0;
                continue;
            }
            c++;
        }

        if(c>ans){
            return c;
        }else{
            return ans;
        }
    }
};