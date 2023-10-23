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
        int size,k; cin>>size>>k;
        string yea; cin>>yea;
        // sort(yea.begin(),yea.end());
        set<char> bruh;
        for (char l : yea){
            if (bruh.find(l) != bruh.end()){
                bruh.erase(l);
            }
            else{
                bruh.insert(l);
            }
        }
        if ((bruh.size()-k)%2==0){
            if (bruh.size() <= k){
             cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if (bruh.size() <=k +1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}