#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
signed  main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i< numcases; i++){
      int numships; cin>>numships;
      map<int,int> freq;
      int big = INT_MIN;
      for(int  j = 0 ; j < numships; j++){
        int temp; cin>>temp;
        freq[temp]++;
        big = max(big, temp);
      }
      int good = true;
      for(int j = 0 ; j < big; j++){
        if(freq.count(j)==0){
          good=false;
          break;
        }
        if(freq[j] < freq[j+1]){
          good = false;
          break;
        }
      }
      if( good)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}