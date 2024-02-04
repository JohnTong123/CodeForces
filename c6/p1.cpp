
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        string result = "";
        vector<string> alphabet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        int n, k ; cin>>n>>k;
        for(int j = 0 ; j < n; j++){
            for(int l = 0 ; l < k ; l++){
                result= result+alphabet[l];
            }
        }
        cout<<result<<endl;

    }
    return 0;
}