#include<iostream>
using namespace std;

int main()
{


    string s;
    cin >> s;

    // Pre-compute

    int hash[256]={0};  // limit to 25
    for(int i =0;i<s.size();i++)
    {
        hash[s[i]]+=1; // s[i]='a' if lower case 
    }

    int q;
    cin>>q;

    while (q--)
    {
        char c;
        cin>>c;
 
     // Fetch 
        cout<<hash[c]<<endl;  // if lower case   hash[c-'a']
    }
    
} 