class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());
        // for(int v:arr){
        //     cout<<v<<" ";
        // }
        int c=1;
        int v=arr[0];
        unordered_map <int,int> mp={};
        for(int i=1; i<arr.size(); i++){
            if(arr[i]!=v+1 && arr[i]!=v){
                mp[c]++;
                c=0;
            }else if(arr[i]==v){
                continue;
            }
            c++;
            v=arr[i];
        }
        for(const auto& pair:mp){
            if(pair.first > c){
                c=pair.first;
            }
        }
        return c;
    }
};