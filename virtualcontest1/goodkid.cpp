#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int numInts ; cin>>numInts;
        int product = 1;
        int smol = 99999999;
        int zerocount = 0;
        for (int j =0; j<numInts; j++){
            int k; 
            cin>>k;
            if (k!=0){
            smol = min(k,smol);
            product = product  * k;
            }
            else{
                zerocount ++;
            }
        }
        if (zerocount==0){
        product = product / smol;
        product = product * (smol+1);
        cout<<product<<endl;
        }
        else if (zerocount ==1){
            cout<<product<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}