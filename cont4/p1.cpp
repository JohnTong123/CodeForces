
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
        int nums; cin >> nums;
        int common; cin>>common;
        bool com = false;
        for (int k=0; k< nums; k ++){
            int val; cin>>val;
            if (val == common)
                com=true;
        }
        if (com)
        cout << "YES"<<endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}