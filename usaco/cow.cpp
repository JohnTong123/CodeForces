
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    for (int filler = 0;filler<numCases;filler++){
        int n, q, c; cin>>n>>q>>c;
        vector<int> sequence;
        sequence.push_back(1);
        for(int i = 0 ; i < n; i++){
            int temp; cin>>temp;
            sequence.push_back(temp);
        }
        // vector<pair<int,int>> pairs;
        map<int,int> pairs;
        for(int i = 0 ; i < q; i++){
            int temp,t; cin>>temp>>t;
            pairs[temp] = t;
        }
        bool good = true;
        vector<int> dp = sequence;
        // for(auto i = pairs.begin(); i!=pairs.end();i++){
        //     if(sequence[->second]!=0){

        //     }
        // }
        for(int i = 1; i <= n ; i++){
            dp[i] = max(dp[i], dp[i-1]);
            if(pairs.count(i) !=0){
                if(dp[pairs[i]]==0){
                    sequence[pairs[i]] = dp[i]+1;
                    dp[pairs[i]] = dp[i]+1;
                }
                // else if(dp[pairs[i]] < dp[i]+1){
                //     good = false;
                // }
            }
        }
        for(int i = 1; i <= n; i++){
            if(sequence[i] == 0){
                sequence[i] = 1;
            }
            if(sequence[i] > c || sequence[i] >n){
                good = false;
            }
        }
        if(!good){
            cout<<-1<<endl;
        }
        else{
            for(int i = 1; i<=n; i++){
                cout<<sequence[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}