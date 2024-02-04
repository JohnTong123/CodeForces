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
    vector<int> dp;
    for(int i = 0 ; i <=maxweight;i++){
        dp.push_back(0);
    }
    for(int i = 0 ; i < num ; i++){
        dp.push_back(0);
        for(int j = maxweight; j >= items[i].first; j--){
            if(j-items[i].first >=0){
                dp[j] = max(dp[j],dp[j-items[i].first ] + items[i].second);
            }
        }
    }
    // cout<<dp[0]<<endl<<dp[1]<<endl<<dp[2]<<endl<<dp[3]<<endl<<dp[4]<<endl<<dp[5]<<endl<<dp[6]<<endl<<dp[7]<<endl<<dp[8];
    cout<<dp[maxweight];
    return 0;
}