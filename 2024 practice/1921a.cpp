
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
    for (int cases = 0;cases<numCases;cases++){
        int x,y;
        cin>>x>>y;
        bool xd = false;
        bool yd =false;
        for(int i = 0 ; i < 3; i++){
            int r,t; cin>>r>>t;
            if(x!=r && !xd){
                x = abs(x-r);
                xd=true;
            }
            if(y!=t && !yd){
                yd=true;
                y=abs(y-t);
            }
        }
        cout<<x*y<<endl;
        
    }
    
    return 0;
}