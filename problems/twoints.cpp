
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
        int a; cin>>a; int b; cin>>b; cout<<(max(a,b)-(min(a,b)))/10 +!(a%10==b%10)<<endl;
    }
    return 0;
}