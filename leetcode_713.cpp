#include<bits/stdc++.h>
using namespace std;

int opt(vector<int>& num, int k){
    if(k<=1){
        return 0;
    }
    int head=0, tail=0,ans=0,prod=1;
    for(head=0;head<num.size();head++){
        prod = prod*num[head];
        while(prod>=k){
            prod = prod/num[tail];
            tail++;
        }
        ans+=(head-tail+1);
    }
    return ans;
}

int main(){

    vector<int>num = {10,5,2,6};
    int k = 100;

    cout<<opt(num,k);

    return 0;
}