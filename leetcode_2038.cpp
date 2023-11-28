class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        
        int r_sum,t_sum;
        int m = rolls.size();
     
        
        int temp_sum = accumulate(rolls.begin(),rolls.end(),0);
        
        t_sum = mean * (m+n);
        r_sum = t_sum-temp_sum;
        
        if(r_sum>6*n || r_sum <n){
            return {};
        }
        
        int a = r_sum/n;
        int b = r_sum%n;
        
        vector<int> ans(n,a);
        
        for(int i=0;i<b;i++){
            ans[i]++;
        }
        return ans;
        
    }
};