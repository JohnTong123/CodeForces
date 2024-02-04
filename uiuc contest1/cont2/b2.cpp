#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
signed  main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int bruh =0; bruh< numcases; bruh++){
        int n , u , r, d, l; cin>>n>>u>>r>>d>>l;
        if(n==2){
            bool good = false;
            if(u==2 && r==2 && l==2 && d==2){
                good = true;
            }
            if(u==0 && r==0 && l==0 && d==0){
                good = true;
            }
            if(u==1 && r==1 && l==0 && d==0){
                good = true;
            }
            if(u==1 && r==0 && l==1 && d==0){
                good = true;
            }
            if(u==0 && r==0 && l==1 && d==1){
                good = true;
            }
            if(u==0 && r==1 && l==0 && d==1){
                good = true;
            }
            if(u==2 && r==1 && l==1 && d==0){
                good = true;
            }
            if(u==1 && r==2 && l==0 && d==1){
                good = true;
            }
            if(u==0 && r==1 && l==1 && d==2){
                good = true;
            }
            if(u==1 && r==0 && l==2 && d==1){
                good = true;
            }
            if(u==1 && r==1 && l==1 && d==1){
                good = true;
            }
            if(u==2 && r==2 && l==1 && d==1){
                good = true;
            }
            if(u==2 && r==1 && l==2 && d==1){
                good = true;
            }
            if(u==1 && r==1 && l==2 && d==2){
                good = true;
            }
            if(u==1 && r==2 && l==1 && d==2){
                good = true;
            }
            
            if(good){
            cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
            }
            continue;
        }
        bool good = false;
        for(int i  = 0 ; i <16; i++){
            int su = u;
            int sd = d;
            int sl = l;
            int sr = r;
            su = su - (((i&8)!=0) + ((i&4)!=0));
            sd = sd - (((i&2)!=0) + ((i&1)!=0));
            sl = sl - (((i&8)!=0) + ((i&1)!=0));
            sr = sr - (((i&4)!=0) + ((i&2)!=0));
            // if(i==14){
            //     // cout<<((i&4)!=0)<<endl;
            //     cout<<su<<endl;
            //     cout<<sd<<endl;
            //     cout<<sl<<endl;
            //     cout<<sr<<endl;
            // }
            if(su >=0 && sd>=0 && sl>=0 && sr>=0 && su<=n-2 && sd<=n-2 && sl<=n-2 && sr<=n-2){
                good=true;
            }

        }
        if(good){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}