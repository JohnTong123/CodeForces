#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i< numcases; i++){
        int nums,divisor; cin>>nums>>divisor;
        int beeg = 0;
        int numeven =0 ;
        for(int k=0;k<nums;k++){
            int w; cin>>w;
            numeven+=(w%2==0);
            if (w%divisor ==0){
                beeg = divisor;
                
            }
            beeg = max(beeg, w%divisor);
        }
        if (divisor ==4){
            cout<<min(divisor-beeg,max(0 ,2-numeven))<<endl;
        }
        else{
        cout<<divisor-beeg<<endl;
        }
    }
    return 0;
}