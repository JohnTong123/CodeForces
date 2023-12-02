#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".txt").c_str(), "r", stdin);
    freopen((name + "a_ans.txt").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("day2");
    string value;
    int sum=0;
    int gindex=0;
    bool chillin = true;
    map<char,int> maxes = {{'b', 14},{'r',12},{'g',13}};
    while(cin>>value){
        if(value =="Game"){
            sum+=chillin *gindex;
            chillin=true;
            gindex++;
            cin>>value;
        }
        else{
            int num = stoi(value);
            cin>>value;
            if(num > maxes[value[0]]){
                chillin=false;
            }
        }
        

    }
    sum+=chillin *gindex;

    cout<<sum;
}