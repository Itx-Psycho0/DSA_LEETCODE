class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int cn = 0;
        for(int v:nums){
            if(cn==0){
                c=v;
                
            }

            cn+=(c==v)?1:-1;
        }
        return c;

    }
};