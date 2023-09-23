#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int sum =0;
        for ( int j =0; j< 10; j++){
            string word ; cin>>word;
            for ( int k =0; k< 10; k++){
                if (word[k] == 'X'){
                    int x = k+1;
                    int y = j+1;
                    if (x>5)
                    x=11-x;
                    if (y>5)
                    y=11-y;
                    sum=sum+min(x,y);
                }
            }

        }
        cout << sum <<endl;
    }
    return 0;
}