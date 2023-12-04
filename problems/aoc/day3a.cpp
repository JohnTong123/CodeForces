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

int valid(int fpos,int bpos,string a, string b, string c){
    if(b[fpos-1] !='.' && (b[fpos-1] <'0' ||b[fpos-1] >'9'))
    return true;
    if(b[bpos+1] !='.' && (b[bpos+1] <'0' ||b[bpos+1] >'9'))
    return true;
    for(int i = fpos-1; i <= bpos+1; i ++){
        if(a[i] !='.' && (a[i] <'0' ||a[i] >'9'))
        return true;
        if(c[i] !='.' && (c[i] <'0' ||c[i] >'9'))
        return true;
    }
    return false;
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
    int sum = 0;
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
                i--;
                // cout<<fpos<<endl<<bpos<<endl;
                // cout<<valid(fpos,bpos,past,curr,next)<<endl;

                sum+=valid(fpos,bpos,past,curr,next) * stoi(curr.substr(fpos,bpos-fpos+1));
            }
        }
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
            // cout<<fpos<<endl<<bpos<<endl;
            // cout<<valid(fpos,bpos,past,curr,next)<<endl;

            sum+=valid(fpos,bpos,past,curr,next) * stoi(curr.substr(fpos,bpos-fpos+1));
        }
    }
    cout<<sum;
    return 0;
}