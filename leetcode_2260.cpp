#include <bits/stdc++.h>
using namespace std;

int opt(vector<int>& cards){

    unordered_map<int,int>mp;

    int head=0,tail=0,len=INT_MAX;

    for(head=0;head<cards.size();head++){
        mp[cards[head]]++;      

        while(mp[cards[head]]>1){
            len = min(len,head-tail+1);
            mp[cards[tail]]--;
            tail++;
        }
    }
    return len==INT_MAX?-1:len;
}
int main(){

     vector<int>cards = {3,4,2,3,4,7};
    cout<<opt(cards);

    return 0;
}