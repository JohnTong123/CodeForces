
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
        int len; cin >>len;
        string word; cin >> word;
        bool follow = false;
        string submit = "";
        for (int k =0; k < len ; k++){
            if(!follow){
                submit = submit + word[k];
                follow = true;
            }
            else{
                if(word[k] == submit.back())
                follow=false;
            }
        }
        cout << submit<<endl;
    }
    return 0;
}