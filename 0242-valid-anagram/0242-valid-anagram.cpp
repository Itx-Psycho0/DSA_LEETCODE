class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> mp;
        // for(int i=0; i<s.size(); i++){
        //     // if(mp.contains(s[i])){
        //     //     mp[s[i]]++;
        //     // }else{
        //     // mp[s[i]]=1;
        //     // }
        //     mp[s[i]]++;
        // }

        // for(int i = 0; i<t.size(); i++){
        //     if(mp.contains(t[i])){
        //         mp[t[i]]--;
        //     }
        // }


        for(char c : s){
            mp[c]++;}

        for(char c : t){
            mp[c]--;}

        for(char c : s){
            if(mp[c]!=0){
                return false;
            }
            
        }
        return true;


    }
};