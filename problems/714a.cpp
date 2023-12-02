
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int i =0; i<numcases; i++){
        int size,peaks; cin>>size>>peaks;
        if((size-1)/2 < peaks){
            cout<<-1<<endl;
        }
        else{
        deque<int> bruv;
        for(int j=0; j < size; j++){
            bruv.push_front(j+1);
        }
        while(peaks > 0){
            cout<<bruv.back()<<' '<<bruv.front()<<' ';
            bruv.pop_front();
            bruv.pop_back();
            peaks--;
        }
        while(!bruv.empty()){
            cout<<bruv.front()<<' ';
            bruv.pop_front();
        }
        cout<<endl;
        }
    
    }     
    return 0;
}