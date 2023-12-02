#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".txt").c_str(), "r", stdin);
    freopen((name + "b_ans.txt").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("day2");
    string value;
    int sum=0;
    int gindex=0;
    bool chillin = true;
    map<char,int> maxes = {{'b', 0},{'r',0},{'g',0}};
    while(cin>>value){
        if(value =="Game"){
            cin>>value;
            // cout<<maxes['b']<<endl<<maxes['g']<<endl<<maxes['r']<<endl;
            sum+=maxes['b'] * maxes['r'] * maxes['g'];
            maxes['b'] = 0;
            maxes['r'] = 0;
            maxes['g'] = 0;
        }
        else{
            int num = stoi(value);
            cin>>value;
            maxes[value[0]] = max(maxes[value[0]] , num);
        }


    }
    sum+=maxes['b'] * maxes['r'] * maxes['g'];

    cout<<sum;
}