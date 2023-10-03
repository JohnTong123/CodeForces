
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numhours; cin>>numhours;
    int beg = 0;
    int curr=0;
    bool start = true;
    int big = 0;
    int val;
    for (int i =0 ; i< numhours ;i++){
        cin>>val;
        if (start and val==1){
            beg++;
            curr++;
        }
        else if (val==1){
            curr++;
            start=false;
        }
        else{
            start=false;
            big = max(big,curr);
            curr=0;
        }
    }
    if (val ==1)
        curr+=beg;
    cout<<max(curr,big)<<endl;
    return 0;
}