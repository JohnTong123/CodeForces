
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
        int len; cin>>len;
        vector<int> sides;
        for(int j = 0 ; j < len; j++){
            int temp; cin>>temp;
            sides.push_back(temp);
        }
        sort(sides.begin(),sides.end());
        if(sides[0] + sides[1] <= sides[sides.size()-1]){
            cout<<1<<" "<<2<<" "<<sides.size()<<endl;
        }
        else{
            cout<<-1<<endl;
        
        }
    }
    
    return 0;
}