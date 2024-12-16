class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ct=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0 && binary_search(arr.begin(),arr.end(),2*arr[i])){
                return true;
            }
            else if(arr[i]==0){
                ct++;
            }
        }
        if(ct>=2){
            return true;
        }
        return false;
    }
};