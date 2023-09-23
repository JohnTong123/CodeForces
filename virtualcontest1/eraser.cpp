#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int length; cin>>length;
        int splash; cin>>splash;
        string word ; cin>>word;
        int sum = 0;
        int k;
        for (k = 0; k<length; k++){
            if(word[k] == 'B'){
                if( k + splash > word.size()-1){
                    sum++;
                    break;
                }
                else{
                    k=k+splash-1;
                // cout<<word<<endl;

                sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}