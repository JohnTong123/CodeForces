
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
        long long n,m ; cin>>n>>m;
        if(n % 2 != 0  && n %m != 0){
            cout<<-1<<endl;
        }
        else if (n)
        cout<<sum<<endl;
    }
    return 0;
}