
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
        int nums; cin >> nums;
        int result = 1;
        for (int k=0; k< nums; k ++){
            int val; cin>>val;
            if (val == result)
            result++;
            result++;
        }
        cout << result-1<<endl;
    }
    return 0;
}