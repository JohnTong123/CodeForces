
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
        int bsize; cin>>bsize;
        long long s1=0;
        long long s2=0;
        long long b1;
        long long b2;
        long long val; cin>>val;
        b1=val;
        s1=val;

        for (int k =1; k <bsize; k++){
            cin>>val;
            s1=s1+val;
            b1=min(b1,val);
        }
        cin>>val;
        b2=val;
        s2=val;
        for (int j =1; j <bsize; j++){
            cin>>val;
            s2=s2+val;
            b2=min(b2,val);
        }
        cout<<min(b2 * bsize + s1, b1 * bsize + s2)<<endl;
    }
    return 0;
}