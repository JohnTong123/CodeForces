#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
long long gcd(long long a , long long b){
    if(a < b){
        long long c = b;
        b=a;
        a=c;
    }
    while(b!=0){
        long long c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int  num; cin >>num; 
    
    for( int i = 0 ; i < num ; i ++){
        long long a,  b; cin>>a>>b;
        long long c = gcd(a,b);
        long long result = a*b/c;
        if (a ==1 || b==1){
            if(a==1){
                cout<<b*b<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
        else if (c == a || c ==b){
             cout<<max(a,b) * max(a,b)/min(a,b)<<endl;

        }
        else{
        cout<<result<<endl;
        }
    }
    return 0;
}