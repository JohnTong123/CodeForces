
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
        long long numj,numg, turns; cin>>numj>>numg>>turns;
        long long smol; cin>>smol;
        long long big = smol;
        long long sum = smol;
        for ( int i =0 ; i <numj-1 ; i++){
            long long val; cin>>val;
            sum+=val;
            smol = min(smol,val);
            big= max(big,val);

        }
        long long big1; cin>>big1;
        long long smol1 = big1;

        for ( int i =0 ; i <numg-1 ; i++){
            long long val; cin>>val;
            smol1 = min(smol1,val);
            big1= max(big1,val);
        }
        if (turns %2 ==0){
            if (smol <= smol1 && big<=big1){
                sum=sum;
            }
            else if (smol<=smol1 && big >=big1){
                sum=sum +big1 - big;
            }
            else if (smol>=smol1 && big >=big1){
                sum=sum - smol + smol1 + big1 - big;
            }
            else{
                sum = sum - smol + smol1;
            }

            }          
        
        else{
            long long zero = 0;
            if (smol <= smol1 && big>=big1){
                sum += big1 - smol;
            }
            else if (smol <= smol1){
                sum += max(zero, big1 - smol);

            }
            else if (big >= big1){
                
                sum += max(big1 - smol,zero);

            }
            else{
                sum+=max(big1 - smol,zero);
            }
        }
        cout<<sum<<endl;
    }   
    return 0;
}