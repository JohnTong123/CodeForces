#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}


int main()
{
    setIO("bruh");
    int numCases; cin>>numCases; 
    for(int i =0; i< numCases; i++){
        int product ; cin>>product;
        int k = product;
        int sum = 0;
        int currprod=1;
        vector<int> nums;
        int count =2;
        while(product !=1 && sum < 41 && count <= 41 ){
            while (product % count ==0&& product !=1 && sum < 41 && count <= 41){
                product=product/count;
                nums.push_back(count);
                sum+=count;
                currprod = currprod * count;
            }
            count++;
        }

        if (sum>41 || currprod !=k){
            cout<<"Case #" << i +1<< ": -1"<<endl;
        }
        else{
            cout<<"Case #" << i +1<< ": " << nums.size() + 41 - sum<<" ";
            for (int z = 0 ; z< nums.size(); z++){
                cout<<nums[z]<<" ";
            }
            for (int z = 0 ; z< 41 - sum; z++){
                cout<< "1 ";
            }
            cout<<endl;
        }

    }
}