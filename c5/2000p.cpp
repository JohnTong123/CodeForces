
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
        map<int,int> values;
        long long n,k ; cin>>n>>k;
        for(int i = 0 ;i < k; i++){
            int val; cin>>val;
            values[val]++;
        }
        while(k>0){

        }
        cout (values.end()-1)->second;
    }
    return 0;
}