#include<bits/stdc++.h>
using namespace std;

void reverseString (string &s , int start , int end )  // same as itrative approach
{
    //base case 
    if(start>=end) return;

    // ek case tum karo
    swap(s[start],s[end]);

    // baki recursion sambhal lega
    reverseString(s,start+1,end-1);
}



int main()
{
    string s;
    cin>>s;
    int start =0;
    int end = s.size()-1;
    reverseString(s,start,end);
    cout<<s;


}