
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
        string binary; cin>>binary;
        vector<int> freq;
        int past = 0 ;
        int alice = 0 ;
        for(int j = 0 ; j < binary.size(); j++){
            if(binary[j] == '0'){
                if(past!=0){
                    freq.push_back(-past);
                }
                past = 0;
            }
            else{
                past++;
            }
        }
        if(past!=0){
            freq.push_back(-past);
        }
        sort(freq.begin(),freq.end());
        for(int j = 0 ; j< freq.size(); j+=2){
            alice+=freq[j];
        }
        cout<<-1*alice<<endl;
    }
    return 0;
}