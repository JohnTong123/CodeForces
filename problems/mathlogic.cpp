
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i<numcases; i++){
        long long num; cin>>num;
        long long count = 0;
        for(int k =0; k < 32; k++){
            count+=num&1;
            num=num>>1;
        }
        long long res = pow(2,count);
        cout<<res<<endl;
    
    }     
    return 0;
}