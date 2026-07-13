class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int count=0;
        for(int i =0; i<nums.size(); i++){
            prefix +=nums[i];
            int need = prefix-k;
            if (mp.contains(need)){
                count+=mp[need];
            }
            mp[prefix]++;

        }
        return count;
    }
};