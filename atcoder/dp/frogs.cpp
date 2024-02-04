#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int  num; cin >>num; 
    vector<int> nums;
    // vector<int> sums;
    // nums.push_back(0);
    // nums.push_back(0);
    for( int i = 0 ; i < num ; i ++){
        int n; cin>>n;
        nums.push_back(n);
        // sums.push_back(0);
    }
    // sums.push_back(0);
    // sums.push_back(0);
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(abs(nums[1] - nums[0]));
    for(int i = 2; i < nums.size(); i++){
        // if(dp[i-1]> )
        // int k = dp[i-1];
        int k =min(dp[i-1] + abs(nums[i]-nums[i-1]), dp[i-2] + abs(nums[i]-nums[i-2]));
        dp.push_back(k);
    }
    cout<<dp[dp.size()-1];
    return 0;
}