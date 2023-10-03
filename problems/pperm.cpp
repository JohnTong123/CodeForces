
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  size; cin>>size;
    vector<int> kk;
    vector<int> k;
    int sum; cin>>sum;
    k.push_back(sum);
    int mins = sum;
    for (int i =1 ; i< size-1;i++){
        int val; cin>>val;
        sum+=val;
        k.push_back(sum);
\
        mins = min(mins,sum);
    }
    kk.push_back(-min(0, mins) +1);
    for (int i =0 ; i< size-1;i++){
        kk.push_back(k[i] - min(0,mins)+1);
    }
    vector<int> bruh = kk;
    sort(bruh.begin(),bruh.end());
    bool isCont = true;
    for (int i =0 ; i< size-1;i++){
        if (bruh[i] +1 != bruh[i+1]){
            isCont = false;
            break;
        }
    }
    if (isCont){
        for (int i =0 ; i< size;i++){
            cout<<kk[i]<<" ";
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}