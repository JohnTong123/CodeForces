
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
        int x, n ; cin>>x>>n;
        int result = 1;
        for(int i =x/n;i >=2; i--){
            if(x%i ==0){
                result =  i;
                break;
            }
        }
        // a
        cout<<result<<endl;

    }
    return 0;
}