class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int cutl=-1;
        ans.push_back(-1);
        for(int i=arr.size()-1;i>0;i--){
             if(arr[i]>cutl){
                cutl = arr[i];
             }
             ans.push_back(cutl);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};