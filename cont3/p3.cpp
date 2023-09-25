
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
        int score = 0;
        int nums; cin >> nums;
        bool first =true;
        vector<int> numbas;
        int k =0;
        while(k<nums){
            int val1;cin>>val1;

            if (first){
                if (val1> 0){
                    score=score+val1;
                    first=false;
                }
                else if (k+1<nums){
                    int val2;cin>>val2;
                    score=score+max(0,val2+val1);
                    if (val1+val2<0){
                        first=false;
                    }
                    // first=false;
                    k=k+1;
                    
                }
                k=k+1;
            }
            else{
                score = score+max(0,val1);
                k=k+1;
            }

        }
        cout<<score<<endl;
    }
    return 0;
}