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
    setIO("day4");
    string value;
    int sum=0;
    int cardnum = 0;
    bool win = false;
    bool mine = false;
    set<string> winnings;
    map<int,int> cards;
    int curr = 1;
    cards[1] = 0;
    int add=1;
    while(cin>>value){
        if(value =="Card"){
            winnings.clear();
            sum+=cards[curr];
            win=true;
            mine=false;
            cin>>value;
            curr = stoi(value.substr(0,value.size()-1));
            cards[curr]++;
            add=1;
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
                cards[curr + add] += cards[curr] ;
                add++;
            }
        }

    }
    sum+=cards[curr];


    cout<<sum;
    return 0;
}