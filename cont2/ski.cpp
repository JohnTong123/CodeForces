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
        int arr; cin >> arr;
        int days; cin >> days;
        int temp; cin >>temp;
        long long sum =0;
        int streak = 0;
        for (int k =0 ; k < arr; k++){
            int val; cin >> val;
            if (val <=temp){
                
                streak ++;
                if (streak >= days){
                    int n = streak- days+1;
                    sum += streak-days + 1;
                }
            }
            else {

                streak = 0;
            }
        }
        cout << sum <<endl;
    }
    return 0;
}