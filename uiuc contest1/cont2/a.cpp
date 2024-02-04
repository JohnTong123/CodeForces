#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Include the string library
// #include <string>
#define int long long
signed  main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int  numcases; cin>>numcases;
    for (int bruh =0; bruh< numcases; bruh++){
      string letters; cin>>letters;
      int letter[3] = {0};
      for(int i = 0 ; i < letters.size(); i++){
        letter[letters[i]-'A']++;
      }
      int beeg = max(letter[0],max(letter[1],letter[2]));
      int index = 0;
      int sum = 0 ;
      for(int i = 0 ; i < 3; i++){
        sum+=letter[i];
        if(beeg == letter[i]){
            index = i;
        }
      }
    //   cout<<sum<<endl;
      if(sum-beeg!=beeg){
        cout<<"NO"<<endl;
        continue;
      }
    
      for(int i = 0 ; i < letters.size(); i++){
        if(letters[i] -'A'== index){
            letters[i] = '0';
        }
        else{
            letters[i] = '1';
        }
      }
      stack<int> para;
      para.push(letters[0]);
      char first = letters[0];
      bool good = true;
    //   for(int j = 0 ; j < letters.size(); j++ ){
    //     cout<<letters[j];
    //   }
    //   cout<<endl;
      for(int i = 1; i < letters.size() ; i++){
        if(para.size() == 0 && letters[i] !=first){
            // cout<<"HI"<<endl;
            good = false;
            break;
        }
        else if (letters[i] != first && para.size()!=0){
            para.pop();
        }
        else{
            para.push(first);
        }
      }
    //   cout<<para.size()<<endl;
      if(para.size() !=0 || !good){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }

    }
    return 0;
}