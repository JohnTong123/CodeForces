
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

// string reverse(string word){
//     string newword = "";
//     for( int i= word.size()-1; i >=0; i--){
//         newword = newword + word[i];
//     }
//     return newword;
// }

int bsearch(int k[], int val, int len){
    int high = len;
    int low = 0;
    while( high > low){
        if (k[low + (high - low +1)/2] < val){
            low =  low +  (high - low+1)/2; 
        }
        else{
             high = low - (high - low+1)/2; 
        }

    }
    return low;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int stringlen; cin>>stringlen;
        int arraylen; cin>>arraylen;
        string word; cin>>word;
        int l[arraylen];
        int r[arraylen];
        for(int j =0; j < arraylen; j++){
            cin>>l[j];
        }
        for(int j =0; j < arraylen; j++){
            cin>>r[j];
        }
        int nummods; cin>>nummods;
        int mods[nummods]; 
        for(int j =0; j < nummods; j++){
            cin>>mods[j];
        }
        for(int j =0; j < nummods; j++){
            int k = bsearch(l, mods[j], arraylen);
            
            // cout<<"HI"<<nummods<<endl;
            // for(int k =0; k < arraylen; k++){
                if ( l[k] <= mods[j] && r[k] >= mods[j]){
                    int calc = l[k] + r[k]-mods[j];
                    string z = word;
                    string zz =word;
                    int big = z.size();
                    string zzz = word;
                    int minthing = min(mods[j], calc);
                    int maxthing = max(mods[j], calc);
                    string bruh = z.substr(minthing-1,  maxthing- minthing+1);
                    reverse(bruh.begin(),bruh.end());
                    string p1 = "";
                    if (minthing-1!=0){
                    p1 = zz.substr(0, minthing-1);
                    }
                    string p2="";
                    if (big - maxthing!=0)
                    p2 = zzz.substr(maxthing, big - maxthing);
                    word =  p1+ bruh + p2;
                    // break;
                // }
                }
               
            
        }
        cout<<word<<endl;

    }
    return 0;
}