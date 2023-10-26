#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

long long factorial(int z){
    long long prod = 1;
    for (int i = z; i >0; i--){
        prod = (prod  * i) % 998244353;
    }
    return prod;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i< numcases; i++){
        string z; cin>>z;
        long long nums = 1;
        int count = 0;
        int row =1;
        char past;
        int c=0;
        if(z[0] == '0'){
            past = '1';
        }
        else{
            past = '0';
        }
        for (char k : z){
            if (k==past){
                row++;
                c++;
            }
            else if (row!=1){
                count+=row;
                row =1;
            //     nums*=factorial(row);
            //     row=1;
             }
            past = k;
        }
        if(row!=1)
        count+=row;    

        nums *= factorial(count)%998244353;

        cout<<c<<" "<<nums<<endl;
    }
    return 0;
}