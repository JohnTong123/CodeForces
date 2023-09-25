
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
        string word ; cin>>word;
        if(word[0] == 'a' || word[1] == 'b' || word[2]== 'c'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}