#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".txt").c_str(), "r", stdin);
    freopen((name + "_ans.txt").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("day1a");
    string value;
    int sum=0;
    set<char> nums = {'0','1','2','3','4','5','6','7','8','9'};
    while(cin>>value){
        for(int i =0; i < value.size();i++){
            if(nums.count(value[i])!=0){
                int k = value[i] -'0';
                sum+= k*10;

                break;
            }
        }
        for(int i =value.size()-1; i >=0;i--){
            if(nums.count(value[i])!=0){
                int k = value[i] -'0';
                sum+= k;
                break;
            }
        }
    }
    cout<<sum;

    
}