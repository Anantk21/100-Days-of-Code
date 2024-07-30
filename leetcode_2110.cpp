#include <bits/stdc++.h>
using namespace std;

long long opt(vector<int>& nums){
    long long head=0,tail=0,ans=0;
    for(head=1;head<nums.size();head++){
        
        while(head<nums.size() && nums[head]-nums[head-1]==-1){
            ans+=(head-tail),head++;
        }
        tail=head;
    }
    return ans+nums.size();
}
int main(){
    vector<int>nums = {3,2,1,4};
    cout<<opt(nums)<<endl;

    return 0;
}