
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
        long long a,b,x,y,n; cin >> a >> b >> x >> y>>n;
        long long j = max(x,a-n)   * max(b - (n-(a- (max(x,a-n) ))), y);
        long long k = (max(y,b-n) )  * max(a-(n-(b- (max(y,b-n) ))), x);
        
        cout<< min(k,j)<<endl;
    }
    return 0;
}