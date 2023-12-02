
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int logthing(int x){
    int count = 0;
    while( x > 0){
        x=x>>1;
        count++;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int vals; cin>>vals;
        int low = INT_MAX;
        int high = INT_MIN;
        for(int j = 0 ; j < vals; j ++){
            int k; cin>>k;
            low=min(low,k);
            high=max(high,k);
        }
        int result = ceil(logthing(high-low));
        
        if(high==low){
            result = 0;
            cout<<result<<endl;
        }
        else if (result > vals){
            cout<<result<<endl;
        }
        else{
            cout<<result<<endl;
            for(int j = 0; j < result; j++){
                int start = low%2;
                low = (low + start)/2;
                cout<<start<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}