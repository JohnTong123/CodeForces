
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
        long long a,b, n; cin>>a>>b>>n;
        if (b>a){
            b=a-1;
            
        }
        long long sum = b;
        
        for (int i =0;i<n;i++){
            long long val; cin>>val;
            if (val +1<= a )
            sum+=val;
            else{
            sum+=a;
            sum--;
            }
        }


        cout<<sum<<endl;
    }
    return 0;
}