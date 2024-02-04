
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
// char findChar(int start, int end, string bruh, ){

// }
signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0;i<numCases;i++){
        int n, k ,length; cin>>n>>k>>length;
        string bruh; cin>>bruh;
        set<char> checked;
        int counter = 0 ;
        vector<string> pain;
        string curr;
        for(int j = 0 ; j < length; j++){
            curr = curr + bruh[j];
            if(checked.count(bruh[j]) == 0){
                checked.insert(bruh[j]);
            }
            if(checked.size()== k){
                set<char> blank;
                checked=blank;
                counter++;
                pain.push_back(curr);
                curr = "";
            }
        }
        if(curr!=""){
            pain.push_back(curr);
        }
        if(pain.size()>n){
            cout<<"YES"<<endl;
        }
        else if(pain.size()==n && checked.size() == 0){
            cout<<"YES"<<endl;
        }
        else{
            while(pain.size()<n){
                pain.push_back("");
            }
            cout<<"NO"<<endl;
            for(int j = 0 ; j < n; j++){
                if(pain[j] == ""){
                    cout<<alpha[k-1];
                }
                else if (j!=counter){
                    cout<<pain[j][pain[j].size()-1];
                }
                else{
                    bool brah = true;
                    for(int l = 0 ; l < k ;l ++){
                        if(checked.count(alpha[l]) == 0){
                            cout<<alpha[l];
                            brah = false;
                            break;
                        }
                    }
                }
            }
            cout<<endl;
        }


    }
    return 0;
}