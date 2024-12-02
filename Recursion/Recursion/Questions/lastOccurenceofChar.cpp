#include<bits/stdc++.h>
using namespace std;

void lastOccurence(string s , int index , char x , int &ans)  // approach 1 left to right
{
    if(index>=s.size()) return;

    if(s[index]==x) ans = index;

    lastOccurence(s,index+1,x,ans);
}

void lastOccurenceRightToLeft(string s , int index ,char x , int &ans)  // approach 1 left to right
{
    if(index<0) return ;

    if(s[index]==x)
    {
        ans =index;
        return;
    }

     lastOccurenceRightToLeft(s,index-1,x , ans);
}

int main()
{
    string s="aaaaab";
    char x ='a';
    int ans;
    // lastOccurence(s,index , x, ans);
    // cout<<ans<<endl;
    lastOccurenceRightToLeft(s,s.size()-1,x,ans);
   cout<<ans<<endl;




}