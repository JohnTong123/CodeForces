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


int findthings(vector<vector<char>> board, set<int>& visited, int it ,int width){
    int count =0;
    visited.erase(it);
    // cout<<"YES"<<endl;

    if(board[it/width-1][it%width] =='.'){
        count++;

    }
    if(board[it/width-1][it%width] =='W' && visited.find(it) != visited.end()){
        count = count + findthings(board, visited, it - width, width);
    }
    if(board[it/width+1][it%width] =='.'){
        count++;

    }
    if(board[it/width+1][it%width] =='W' && visited.find(it) != visited.end()){
        count = count + findthings(board, visited, it + width, width);
    }
    if(board[it/width][it%width+1] =='.'){
        count++;

    }
    if(board[it/width][it%width+1] =='W' && visited.find(it) != visited.end()){
        count = count + findthings(board, visited, it + 1,width);
    }
    if(board[it/width][it%width-1] =='W' && visited.find(it) != visited.end()){
        count = count + findthings(board, visited, it -1,width);
    }
    if(board[it/width][it%width-1] =='.'){
        count++;

    }
    // cout<<count<<endl;

    return count;
}
int main()
{
    setIO("bruh");
    int numCases; cin>>numCases; 
    for(int i =0; i< numCases; i++){
        cout<<numCases<<endl;
        
        int height; cin>>height;
        int width; cin>>width;
        vector<vector<char>> board;
        vector<char> k;
        set<int> visited;
        bool kms = false;

        for( int z=0 ;z<height; z++){
            for (int zz=0; zz<width;zz++){
                visited.insert(zz + (z+1)*(width +2)+ 1 );
            }
        }
        //  cout<<"YES"<<endl;

        for (int z =0; z< width +2; z++){
            k.push_back('B');
        }
        board.push_back(k);
        // cout<<"YES"<<endl;

        for (int z=0; z<height;z++){
            vector<char> w;
            w.push_back('B');
            for (int y=0; y<width;y++){
                char in; cin>>in;
                w.push_back(in);
            }
            w.push_back('B');
            board.push_back(w);
        }

        board.push_back(k);
        // cout<<i<<endl;

        for (auto it=visited.begin(); it!=visited.end(); ){
            // cout<<"YES"<<endl;

            int b = *it;
            if(board[b/width][b%width] !='W')
            visited.erase(it++);
            else{
                int yas = findthings(board,visited, b,width);
                if (yas ==1){
                    cout<<"YES"<<endl;
                    kms =true;
                    // cout<<i<<endl;

                    // break;
                }
                // cout<<visited.size()<<endl;
                it++;
            }
            cout<<i<<" "<<numCases<<endl;

        }

        if (!kms){
            cout<<"NO"<<endl;
        }

    }
}
