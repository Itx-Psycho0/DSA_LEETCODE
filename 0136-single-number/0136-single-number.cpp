class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r = 0;
        for (int v : nums){
            r ^= v;

        }
        return r;
    }
};