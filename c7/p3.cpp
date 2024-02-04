
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
// #define  int64_t  int64_t
int64_t dfs(int64_t x, int64_t y){
    if(x<=y){
        return x;
    }
    else{
        int64_t sol = 0;
        int64_t place =1;
        for(int i= 64; i >=0; i--){
            if(x&(place<<i) !=0){
                sol = max(sol, x&(~((place)<<i)));
            }
        }
        return sol;
    }
}
signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
     int64_t  numCases;
    cin >>numCases; 
    for ( int i = 0;i<numCases;i++){
        int64_t a,b,r; cin>>a>>b>>r;
        int64_t pain = 1;
        int64_t aa = a;
        int64_t bb =b;
        if (a<b){
             int64_t c = b;
            b =a;
            a=c;
        }
        int64_t x = 0 ;
        int count = 64;
        bool first = true;
        while(count>=0){
            // cout<<b<<endl;
            // cout<<(b&(1<<count))<<endl;
            if((a&(pain<<count))!=0 && first){
                // cout<<"kms"<<endl;
                // cout<<count<<endl;
                // cout<<(a&(pain<<count))<<endl;
                first=false;
            }
            else if((a&(pain<<count))!=0 && (b&(pain<<count))==0 ){
                x=x|(1<<count);
            }
            count--;
        }
        cout<<x<<endl;

        // cout<<x<<endl;
        x=dfs(x,r);
        cout<<x<<endl;
        int64_t smol = abs((aa^x)-(bb^x));
        x = 0 ;
        count = 64;
        first = true;
        while(count>=0){
            if((b&(pain<<count))!=0 && (a&(pain<<count))==0 ){
                x=x|(1<<count);
            }
            count--;
        }
        x=dfs(x,r);

        cout<<x<<endl;
        smol = min(smol,abs((aa^x)-(bb^x)));
        cout<<smol<<endl;

    }
    return 0;
}