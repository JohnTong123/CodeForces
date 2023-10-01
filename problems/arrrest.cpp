
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int n,x,y; cin>>n>>x>>y;
        if (n==2){
            cout<<x<<" "<<y<<endl;
        }
        else{
            int diff = y-x;
            int inc = 0;
            while ((diff)%(n-1 - inc) != 0){
                inc ++;
            }
            int bruh =  x-(inc* (diff)/(n-1 - inc));
            if( bruh > 0){
                for (int i =0; i <n; i++){
                    cout<<bruh <<" ";
                    bruh += (diff)/(n-1 - inc);
                }
            }
            else{
                while(bruh <= 0){
                    bruh += (diff)/(n-1 - inc);
                }
                for (int i =0; i <n; i++){
                    cout<<bruh <<" ";
                    bruh += (diff)/(n-1 - inc);
                }
            }
            cout<<endl;
        }

        
    }
    return 0;
}