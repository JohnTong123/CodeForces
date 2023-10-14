#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("bruh");
    int numCases; cin>>numCases; 
    for(int i =0; i< numCases; i++){
        string val ; cin>>val;
        vector<char> vals;
        for(char k : val){
            vals.push_back(k);
        }
        int turns =0;
        for( int  j = 0; j < vals.size(); j++){
            
        }
    }
}