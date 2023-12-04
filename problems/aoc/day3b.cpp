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

pair<int,int> valid(int fpos,int bpos,string a, string b, string c, int row){
    if(b[fpos-1] =='*')
    return make_pair(row,fpos-1);
    if(b[bpos+1] =='*')
    return make_pair(row,bpos+1);
    for(int i = fpos-1; i <= bpos+1; i ++){
        if(a[i] =='*')
            return make_pair(row-1,i);
        if(c[i] =='*')
            return make_pair(row+1,i);
    }
    return make_pair(-1,-1);
}
int main()
{
    setIO("day3");
    string value;
    string past = "..............................................................................................................................................";
    string curr = "";
    string next = "";
    cin>>curr;
    curr = "."+curr+".";
    map<pair<int,int>, vector<int>> gears;
    int row=0;
    while(cin>>next){
        next = "."+next+".";
        for(int i =1; i < curr.size()-1; i++){
            if(curr[i] >= '0' && curr[i]<='9'){
                int fpos = i;
                int bpos = i;
                while(curr[i] >= '0' && curr[i]<='9'){
                    bpos =i;
                    i++;
                }
                // i--;
                // cout<<fpos<<endl<<bpos<<endl;
                // cout<<valid(fpos,bpos,past,curr,next)<<endl;
                pair<int,int> dub = valid(fpos,bpos,past,curr,next,row);
                pair<int,int> negative = make_pair(-1,-1);
                if(dub!=negative)
                gears[dub].push_back(stoi(curr.substr(fpos,bpos-fpos+1)));
            }
        }
        row++;
        string sub = curr;
        curr=next;
        past = sub;
    }
    next = "..............................................................................................................................................";
    for(int i =1; i < curr.size()-1; i++){
            if(curr[i] >= '0' && curr[i]<='9'){
                int fpos = i;
                int bpos = i;
                while(curr[i] >= '0' && curr[i]<='9'){
                    bpos =i;
                    i++;
                }
                i--;
                pair<int,int> dub = valid(fpos,bpos,past,curr,next,row);
                pair<int,int> negative = make_pair(-1,-1);
                if(dub!=negative)
                gears[dub].push_back(stoi(curr.substr(fpos,bpos-fpos+1)));
            }
    }
    int sum = 0;
    for(auto i : gears){
        if (i.second.size()>1){
            sum+=i.second[0]*i.second[1];
        }
    }
    cout<<sum;
    return 0;
}