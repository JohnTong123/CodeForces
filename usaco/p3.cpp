
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
int squart(int x){
    int high = x;
    int low = 0;
    while(high!=low){
        int mid = (high+low)/2;
        if(mid * mid > x){
            high=mid;
        }
        else{
            low=(low+high+1)/2;
        }
    }
    return high+1;
}
signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  n;
    cin >>n; 
    set<int> days;
    int smol = INT_MAX;
    for(int i = 0 ; i < n; i++){
        int temp; cin>>temp;
        days.insert(temp);
        smol = min(smol,temp);
    }
    int result = 0;
    int to = smol/4;
    vector<bool> good(to,true);
    // int blud = squart(to);
    // map<int,set<int>> remainders;
    set<int> blank;

    vector<set<int>> remainders(to+1,blank);
    // set<int> blank;
    // for(int i = 1; i <= to; i++){
    //     remainders[i]= blank;
    // }
    // cout<<to<<endl;
    for(int i =1; i <=to; i++){
        bool good= true;
        for(auto j = days.begin(); j!=days.end(); j++){
            remainders[i].insert((*j)%i);
            if(*j/i<remainders.size()){
                remainders[*j/i].insert((*j)%i);
            }
            if(remainders[i].size()>3){
                good=false;
                break;
            }
        }
        result+=good*i;
    }

    cout<<result;
    
    return 0;
}