#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".txt").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("here_comes_santa_claus_validation_input(1)");
    int numCases; cin>>numCases; 
    for(int i =1; i< numCases+1; i++){
        int numToys; cin>>numToys;
        vector<float> elves;
        for (int j = 1; j < numToys+1; j++){
            float val; cin>>val;
            elves.push_back(val);
        }
        sort(elves.begin(),elves.end());

        if (numToys == 5){
            cout<<"Case #" << i<<": "<< max(-(elves[0] + elves[2])/2 +(elves[3] + elves[4])/2,-(elves[0] + elves[1])/2 +(elves[2] + elves[4])/2)<<endl;
        }
        else{
             cout<<"Case #" << i<<": "<< -(elves[0] + elves[1])/2 +(elves[elves.size()-1] + elves[elves.size()-2])/2<<endl;
        }
    }
}
