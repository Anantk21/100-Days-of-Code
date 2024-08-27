class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        vector<int>res;
        int m = mat.size();
        int n = mat[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool flip =true;
        for(auto &it:mp){
            if(flip){
                reverse(it.second.begin(),it.second.end());
            }

            for(int &num:it.second){
                res.push_back(num);
            }
            flip=!flip;
        }
        return res;
    }
};