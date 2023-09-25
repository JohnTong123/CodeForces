
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
        int cost; cin >>cost;
        int cakes; cin>>cakes;
        if (cost < pow(2,cakes)){
            cout << cost + 1<<endl;
        }
        else{
            cost = pow(2,cakes);
            cout << cost<<endl;
        }
    }
    return 0;
}