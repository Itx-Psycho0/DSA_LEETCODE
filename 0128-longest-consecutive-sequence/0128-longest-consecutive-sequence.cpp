class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(begin(nums),end(nums));
        int maxLen=0;
        for(int v:st){
            if(st.contains(v-1)){
                continue;
            }
            int curr=v;
            int len=1;
            while(st.contains(curr+1)){
                curr++;
                len++;
            }
            maxLen =max(maxLen,len);

        }
        return maxLen;
    }
};