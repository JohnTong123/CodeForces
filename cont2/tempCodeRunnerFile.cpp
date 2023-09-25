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
        int number; cin>>number;
        long long prod = 1;
        int past =2 ;
        int count =1;
        int sum =0;
        while (number!=0){
            if (past == number%10){
                count =count+1;
                prod = prod * count % 998244353;
                sum++;
            }
            else{
                count=1;
            }
            past = number%10;
            number=number/10;

        }
        cout<< sum<<" "<<prod<<endl;

    }
    return 0;
}