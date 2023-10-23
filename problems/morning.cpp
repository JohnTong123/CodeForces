#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i< numcases; i++){
        int past = 0;
        int count = 4;
        for (int i =0; i < 4; i++){
            char val; cin>>val;
            int curr;
            if (val == '0'){
                curr = 9;
            }
            else{
                curr = val - '0' -1;
            }
            count+=abs(curr-past);
            past = curr;
        }
        
        cout<<count<<endl;
    }
    return 0;
}