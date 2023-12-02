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
    set<char> nums = {'1','2','3','4','5','6','7','8','9'};
    map<string,int> stringvals = {{"one",1},{"two",2},{"three",3},{"four",4},{"five",5}
    ,{"six",6},{"seven",7},{"eight",8},{"nine",9}};
    set<string> names = {"one","two","three","four","five","six","seven","eight","nine"};
    while(cin>>value){
        value+="    ";
        for(int i =0; i < value.size()-4;i++){
            if(names.count(value.substr(i,3))!=0 ){
                int k = stringvals[value.substr(i,3)];
                sum+= k*10;
                break;
            }
            if(names.count(value.substr(i,4))!=0 ){
                int k = stringvals[value.substr(i,4)];
                sum+= k*10;
                break;
            }
            if(names.count(value.substr(i,5))!=0 ){
                int k = stringvals[value.substr(i,5)];
                sum+= k*10;
                break;
            }
            if(nums.count(value[i])!=0){
                int k = value[i] -'0';
                sum+= k*10;

                break;
            }
        }
        for(int i =value.size()-1; i >=0;i--){
            if(names.count(value.substr(i,3))!=0 ){
                int k = stringvals[value.substr(i,3)];
                sum+= k;
                break;
            }
            if(names.count(value.substr(i,4))!=0 ){
                int k = stringvals[value.substr(i,4)];
                sum+= k;
                break;
            }
            if(names.count(value.substr(i,5))!=0 ){
                int k = stringvals[value.substr(i,5)];
                sum+= k;
                break;
            }
            if(nums.count(value[i])!=0){
                int k = value[i] -'0';
                sum+= k;
                break;
            }
        }
    }
    cout<<sum;

    
}