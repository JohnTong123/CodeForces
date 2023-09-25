
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
        int numLift; cin>>numLift;
        int weight; cin>>weight;
        int end; cin>>end;
        int wtf = 1;
        int nextw; 
        int nextend; 
        for (int k =1; k <numLift; k++){
            cin>>nextw;
            cin>>nextend;
            if (wtf && nextw>=weight && nextend>=end){
                wtf=0;
                cout<<-1<<endl;
            }
        }
        if (wtf)
        cout<<weight<<endl;
    }
    return 0;
}