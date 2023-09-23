#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int columns; cin>>columns;
        int water ; cin>>water;
        int coral[columns];
        int big = 0;
        for (int j =0; j<columns;j++){
            
            int z; cin>>z;
            big = max(z,big);
            coral[j] = z;
        }
        // cout <<coral<<endl;
        int used =0;
        int peak = big + water/columns +1;
        int floor = 0;
        while(peak - floor>1){
            int mid = (floor + peak)/2;
            used = mid * columns;
            for(int all =0; all < columns; all++){
                used = used-min(coral[all], mid);
            }
            if (water - used> 0){
                floor = floor + (peak-floor)/2;
            }
            else{
                peak = peak -(peak - floor)/2;
            }
            // cout << used<<endl;
        }
        used = peak * columns;
        for(int all =0; all < columns; all++){
            used = used-min(coral[all], peak);
        }
        if (used <= water){
        cout << peak << endl;
        }
        else{
            cout<<floor<<endl;
        }
    }
    return 0;
}