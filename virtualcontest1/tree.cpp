#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
int main() {
    int  numCases;
    cin >>numCases; 
    for (int i = 0;i<numCases;i++){
        int trees; cin>>trees;
        int fruitLim; cin>>fruitLim;
        int fruit[trees];
        int big = 0;
        vector<int> fruits;
        int pastInt=0;
        int sum = 0;
        for(int k =0; k < trees; k++){
            cin>>fruit[k];
        }
        for(int j =0; j < trees; j++){
            int curr;
            cin>>curr;
            int l = pastInt%curr;
            if(l ==0){
            fruits.push_back(fruit[j]);
            sum = sum + fruit[j];
            if( sum > fruitLim){
                sum = sum - fruits[0];
                int size=  fruits.size()-1;
                big = max(big, size);
                fruits.erase(fruits.begin());
            }
            pastInt=curr;

            }
            else{
                int size=  fruits.size();
                big = max(big, size);
                fruits.erase(fruits.begin(),fruits.end());
                pastInt = curr;
                if(fruit[j] <= fruitLim){
                fruits.push_back(fruit[j]);
                sum=fruit[j];
                }
                else{
                    sum=0;
                    pastInt= 0;
                }
            }
        }
        int size=  fruits.size();
        big = max(big, size);
        cout<<big<<endl;
    }
    return 0;
}