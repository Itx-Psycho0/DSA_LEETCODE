class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i =0; i<nums.size(); i++){
            if(s.contains(nums[i])==true){
                return true;
            }else{
                s.insert(nums[i]);
            }
        }
        return false;
        
    }
};