class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp={};
        for(string v : strs){
            string copy=v;
            sort(copy.begin(),copy.end());
            mp[copy].push_back(v);
        }
        vector<vector<string>> ans={};
        for(const auto& pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};