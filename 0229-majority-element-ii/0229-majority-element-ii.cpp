class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_set<int> ans;
        for (int i : nums){
            mp[i]++;    
            if(mp[i]>(nums.size()/3)){
                ans.insert(i);
            }
        }
        vector<int> vec(ans.begin(),ans.end());
        return vec;
    }
};