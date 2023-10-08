#include <iostream>
#include <vector>
#include <string>

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
    setIO("test1");
    int val; cin>>val; 
    cout<<val;
}
