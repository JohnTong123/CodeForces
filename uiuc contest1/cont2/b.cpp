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
        bool good = true;
        if(max(max(u,r),max(d,l)) > n){
            good=false;
        }
        int mu = u ;
        int mr = r ;
        int md = d ; 
        int ml = l;

        if(u == n){
            mr--;
            ml--;
        }
        if (d==n){
            mr--;
            ml--;
        }
        if(r == n){
            mu --;
            md --;
        }
        if((u==(n-1)) + (d==(n-1)) > mr+ml){
            good = false;
        }
        if((r==(n-1)) + (l==(n-1)) > mu+md){

            good = false;
        }
        if(mu<0 ||md<0 || ml<0||mr<0){
            // cout<<"HI"<<endl;

            good = false;
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