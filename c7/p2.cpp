
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
    for (int i = 0;i<numCases;i++){
        int len; cin>>len;
        vector<pair<int,int>> a;
        vector<int> b;
        for(int i = 0 ; i < len; i++){
            int temp;cin>>temp;
            a.push_back(make_pair(temp,i));
        }
        for(int i = 0 ; i < len; i++){
            int temp;cin>>temp;
            b.push_back(temp);
        }
        vector<int> result(len,0);
        for( int i = 0 ; i < len; i++){
            result[a[i].first-1] = b[a[i].second];
        }
        for(int i = 1; i <= len; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i = 0; i < len; i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}