#include<bits/stdc++.h>
using namespace std;

vector<int>opt(string s, string p){
    vector<int>ans;
    vector<int>temp(26);
    vector<int>hash(26);

    for(int i=0;i<p.size();i++){
        hash[p[i]-'a']++;
    }

    int m =p.size();
    int head=0,tail=0;

    for(head=0;head<s.size();head++){
        if(temp==hash) ans.push_back(tail);
        while(head-tail+1>m){
            temp[s[tail]-'a']--;
            tail++;
        }
        temp[s[head]-'a']++;
        
    }
    if(temp==hash) ans.push_back(tail);
    return ans;
}

int main(){

    string s,p;
    cin>>s>>p;

    vector<int>ans = opt(s,p);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}