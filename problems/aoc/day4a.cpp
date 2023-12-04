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
    setIO("day4");
    string value;
    int sum=0;
    int cardval = 0;
    bool win = false;
    bool mine = false;
    set<string> winnings;
    while(cin>>value){
        if(value =="Card"){
            winnings.clear();
            sum+=cardval;
            cardval = 0;
            win=true;
            mine=false;
            cin>>value;
        }
        else if (value == "|"){
            mine=true;
            win=false;
        }
        else if(win){
            winnings.insert(value);
        }
        else{
            if(winnings.count(value) !=0){
                if(cardval==0)
                cardval=1;
                else
                cardval*=2;
            }
        }

    }

    cout<<sum;
    return 0;
}