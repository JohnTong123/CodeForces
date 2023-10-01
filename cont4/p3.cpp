
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
        long long cap; cin >> cap;
        long long num; cin>>num;
        long long  target; cin>>target;
        if ((num) * (num + 1)/2 > target){
            cout << "NO"<<endl;
        }
        else{
        if (cap > num){
            if ((cap) * (cap+1)/2 - (cap - num) * (cap - num + 1)/2 >= target)
            cout << "YES" << endl;
            else
            cout << "NO"<<endl;
        }
        else{
            if(cap * (cap+1) /2 >= target)
            cout << "YES"<<endl;
            else
            cout <<"NO"<<endl;
        }
        }
    }
    return 0;
}