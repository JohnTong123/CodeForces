#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    long long  num; cin >>num; 
    
    for( long long i = 0 ; i < num ; i ++){
        long long size; cin>>size;
        long long sum = 0 ; 
        long long odds = 0;
        for(long long i = 1; i <=size; i++){

            long long c; cin>>c;
            if(c%2==0){
                sum+=c;
            }
            else{
                odds++;
                if(odds%3 == 2){
                    sum+=c+1;
                }
                else{
                    sum+=c-1;
                }
            }
            if(i==1){
                cout<<c<<" ";
            }
            else{
            cout<<sum<<" ";
            }
        }
        cout<<endl;
    }
}