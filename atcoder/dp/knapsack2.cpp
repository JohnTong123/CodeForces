#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {

    int  num; cin >>num; 
    int maxweight; cin>>maxweight;
    vector<pair<int,int>> items;
    for(int i = 0 ; i < num; i++){
        int z, k; cin>>z>>k;
        items.push_back(make_pair(z,k));
    }
    map<int,int> dp;
    dp[0]=0;
    for(int i = 0 ; i < num ; i++){
        for(int j = maxweight; j >= items[i].first; j--){
            if(j-items[i].first >=0 && dp.count(j-items[i].first)!=0){
                dp[j] = max(dp[j],dp[j-items[i].first ] + items[i].second);
            }
        }
    }
    cout<<dp[maxweight];
    return 0;
}