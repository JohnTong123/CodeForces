#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        string word ; cin>>word;
        int sum =0;
        int acount = 0;
        int k =0;
        for (k =0; k < word.size(); k ++){
            if(word[k] == 'A'){
                acount++;
            }
            else if (acount!=0)
            {
                sum=sum+acount;
                acount=0;
            }
            else{
                if (i < word.size()-1){
                    if(word[k+1] == 'A'){
                        sum=sum+1;
                        k++;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}