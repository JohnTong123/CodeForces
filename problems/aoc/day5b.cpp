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
    setIO("day5");
    string value;

    // vector<unsigned long long> seeds;
    set<pair<unsigned long long, bool>> seedset;
    // vector<bool> seedbool;
    bool add = true;
    while(cin>>value){
        if(value == "seeds:"){
            add=true;
        }
        else if(value[0] <'0' || value[0] > '9' ){
            add=false;
            for(auto i : seedset){
                i.second = false;
            }
        }
        else if(add){
            string bruh; cin>>bruh;
            for(unsigned long long i = stoull(value); i < stoull(value) + stoull(bruh); i++ ){
            seedset.insert(make_pair(i,false));
            // seeds.push_back(i);
            // seedbool.push_back(false);
            }
        }
        else{
            unsigned long long x = stoull(value);
            unsigned long long  y,z; cin>>y>>z;
            set<pair<unsigned long long, bool>> seedcopy ;
            for(auto i :seedset){
                if(!i.second && i.first >=y && i.first <y+z){
                        seedcopy.insert(make_pair(x+i.first -y,true));
                }
                else{
                    seedcopy.insert(make_pair(i.first,i.second));
                }
            }
            seedset=seedcopy;
            
        } 
        

    }
    unsigned long long result = ULLONG_MAX;
    for(auto i  : seedset){
        result = min(i.first,result);
    }
    cout<<result;
    return 0;
}