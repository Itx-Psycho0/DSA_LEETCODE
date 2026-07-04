class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(arr.empty()){
            return -1;
        }
        int p = 1;

        for(int i = 1; i< arr.size(); i++){
            if(arr[i]!=arr[p-1]){
                arr[p]=arr[i];
                p++;
            }
        }
        return p;

    }
};