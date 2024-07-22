#include<bits/stdc++.h>
using namespace std;

int opt(vector<int>& nums,int x){

    int sum = accumulate(nums.begin(),nums.end(),0);
    int reqSum = sum-x;
    if(reqSum==0){
        return nums.size();
    }
    if(reqSum<0){
        return -1;
    }

    int head=0,tail=0,maxLen=0,mySum=0;

    for(head=0;head<nums.size();head++){
        mySum+=nums[head];
        while(mySum>reqSum){
            mySum-=nums[tail];
            tail++;
        }

        if(mySum==reqSum){
            maxLen = max(maxLen,head-tail+1);
        }
    }
    return maxLen==0?-1:nums.size()-maxLen;
};

int main(){

    vector<int>nums={3,2,20,1,1,3};
    int x = 10;

    int ans = opt(nums,x);

    cout<<"Answer is : "<<ans<<endl;

    return 0;
}