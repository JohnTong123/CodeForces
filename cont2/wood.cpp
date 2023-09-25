
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
        int numPattern; cin >> numPattern;
        vector<int> plist;
        for (int k =0; k < numPattern; k++){
            int z; cin >> z;
            plist.push_back(z);
        }
        sort(plist.begin(),plist.end());
        
    }
    return 0;
}