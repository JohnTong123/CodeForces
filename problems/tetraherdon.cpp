
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  n; cin>>n;
    if (n==1){
        cout<<0;
    }
    elif (n==2){
        cout<<3;
    }
    else{
        cout<<pow(3,n)
    }
    return 0;
}