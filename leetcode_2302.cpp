#include <bits/stdc++.h>
using namespace std;

long long opt(vector<int>& nums,long long k){
    // long long n = nums.size();
    long long head=0,tail=0,ans=0,sum=0;

    for(head=0;head<nums.size();head++){
        sum+=nums[head];
        while(sum*(head-tail+1)>=k){
            sum-=nums[tail];
            tail++;
        }
        ans+=head-tail+1;
    }
    return ans;
}

int main(){
    vector<int>nums={2,1,4,3,5};
    int k=10;
    int ans=opt(nums,k);
    cout<<ans;  
    return 0;
}