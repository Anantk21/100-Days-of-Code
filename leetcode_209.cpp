#include<bits/stdc++.h>
using namespace std;

int opt(vector<int>& nums,int target){
    int head=0,tail=0,minlen=INT_MAX,sum=0;

    for(head=0;head<nums.size();head++){
        sum+=nums[head];
        while(sum>=target){
            
            minlen=min(minlen,head-tail+1);
            sum-=nums[tail];
            tail++;
        }
    }
    if(minlen==INT_MAX){
        return 0;
    }
    else{
        return minlen;
    }
}

int main(){

    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};
    int ans = opt(nums,target);
    cout<<ans;

    return 0;
}