#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  num; cin >>num; 
    
    for( int i = 0 ; i < num ; i ++){
        int seq , removed; cin>>seq>>removed;
        bool lost = false;
        int z = 2023;
        for ( int j = 0 ; j < seq ; j ++){
            int y; cin>>y;
            if (!lost && (z%y!=0 || (removed == 0 && y!=2023))) {
                cout<<"NO"<<endl;
                lost=true;
            }
            z=z/y;
        }
        if (!lost){
            cout<<"YES"<<endl;
            cout<<z<<" ";

            for( int j = 1; j < removed; j++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
}