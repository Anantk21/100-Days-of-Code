#include<bits/stdc++.h>
using namespace std;

 
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>sub;
        for(int i=0;i<n;i++){
            long long sum = 0;
            for(int j=i;j<n;j++){
                sum+=(nums[j]);
                sub.push_back(sum);

            }
        }
        // for(int i=0;i<n;i++){
        //     sub.push_back(nums[i]);
        // }
        sort(sub.begin(),sub.end());
        long long ans=0;
        for(int i=left-1;i<right;i++){
            ans+=sub[i];
        }
        return ans%1000000007;
    };


int main(){

    vector<int>nums = {1,2,3,4};
    int n = 4, left = 1, right = 5;
    cout<<rangeSum(nums,n,left,right)<<endl;
    return 0;
}