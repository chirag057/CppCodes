#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
  cin>>t;
  
  while(t>0)
  {
      int x ,y;
      cin>>x>>y;
      
      int rent;
      if(x==y)
      {
          cout<<0;
          cout<<endl;
      }
      else
      {
      rent=y/x;
       cout<<rent;
       cout<<endl;
      }
      
       t--;
  }
 

}
