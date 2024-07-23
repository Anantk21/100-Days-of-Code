
#include<bits/stdc++.h>
using namespace std;

int opt(vector<int>& nums){
    int head=0,tail=0,ans=0,cnt=0;
    for(head=0;head<nums.size();head++){
        if(nums[head]==0) cnt++;
        while(cnt>1){
            if(nums[tail]){
                cnt--;
            }
            tail++;
        }
        ans=max(ans,head-tail);

    }
    return ans;
}
int main(){
    vector<int> nums={0,1,0,1,1};
    cout<<opt(nums);

    return 0;
}