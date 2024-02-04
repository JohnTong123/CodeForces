
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
    for (int counter = 0;counter<numCases;i++){
        int result = 0;
        int len; cin>>len;
        vector<int> store;
        for(int j = 0 ; j < len; j++){
            char temp; cin>>temp;
            store.push_back(temp-'0');
        }
        for(int j = 0 ; j < len; j++ ){
            int sum = 0;
            for(int k = j; k<len; k++){
                sum+=store[k];
                if(sum==k-j+1){
                    result++;
                }
            }
        }
        vector<int> prefix(len,0);
        for(int i = 0 ; i < len; i++){
            prefix[i]+=store[i];
        }

        cout<<result<<endl;
    }
    return 0;
}