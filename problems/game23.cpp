
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  n,m; cin>>n>>m;
    if (m%n!= 0)
    cout<<-1<<endl;
    else{
        int count = 0;

        int z= m/n;
        while (z%3==0){
            z=z/3;
            count++;
        }
        while (z%2==0){
            z=z/2;
            count++;
        }
        if (z!=1){
            cout<<-1<<endl;
        }
        else{
        cout << count<<endl;
        }
    }     
    return 0;
}