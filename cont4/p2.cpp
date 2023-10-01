
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
        int arrsize; cin >> arrsize;
        int past1=6;
        int past2 = 4;
        int curr = 6;
        cout<<past2<< " "<<past1<<" ";
        int count =2;
        while( count < arrsize){
            curr++;
            if ((curr * 3)%(past2 + past1) != 0){
                past2=past1;
                past1=curr;
                cout<< curr <<" ";
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}