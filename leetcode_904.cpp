#include <bits/stdc++.h>
using namespace std;

int opt(vector<int>& fruits){
    unordered_map<int,int>mp;

    int head=0,tail=0,ans=0;
    int n=fruits.size();
    for(head=0;head<n;head++){
        
        mp[fruits[head]]++;

        while(mp.size()>2){
            mp[fruits[tail]]--;
            if(mp[fruits[tail]]==0) mp.erase(fruits[tail]);
            tail++;
        }

        ans = max(ans,head-tail+1);

    }
    return ans;

}

int main(){

    vector<int>fruits = {1,2,3,2,2};
    cout<<opt(fruits);

    return 0;
}