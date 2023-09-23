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
        for (int j =0; j<columns;j++){
            int z; cin>>z;
            coral[j] = z;
        }
        // cout <<coral<<endl;
        int used =0;
        int levels = 0;
        while(water-used>=0){
            used = used + columns;
            for(int all =0; all < columns; all++){
                if (coral[all] > levels){
                    used=used-1;
                }
            }
            // cout << used<<endl;
            levels++;
        }
        levels--;
        cout << levels << endl;
    }
    return 0;
}