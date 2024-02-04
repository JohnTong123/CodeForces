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
    setIO("day5");
    string value;

    vector<unsigned long long> seeds;
    vector<bool> seedbool;
    bool add = true;
    while(cin>>value){
        if(value == "seeds:"){
            add=true;
        }
        else if(value[0] <'0' || value[0] > '9' ){
            add=false;
            for(int i  =0; i < seedbool.size();i++){
                seedbool[i]=false;
            }
        }
        else if(add){
            seeds.push_back(stoull(value));
            seedbool.push_back(false);
        }
        else{
            unsigned long long x = stoull(value);
            unsigned long long  y,z; cin>>y>>z;
            for(int i =0; i < seeds.size(); i ++){
                if(!seedbool[i]){
                    if(seeds[i] >=y && seeds[i] <y+z){
                        seeds[i] = x + (seeds[i]-y);
                        seedbool[i] = true;
                    }
                }
            }
        } 
        

    }
    unsigned long long result = ULLONG_MAX;
    for(unsigned long long i  : seeds){
        result = min(i,result);
    }
    cout<<result;
    return 0;
}