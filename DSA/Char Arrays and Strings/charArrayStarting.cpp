#include<iostream>
#include<string.h>
using namespace std;


int findLength(char ch[], int n)
{

    int length =0;
     for(int i=0;i<n;i++)
     {
        if(ch[i]=='\0')
        {
            break;
        }

        else{
            length++;
        }
     }

     return length;

}
int main()
{
    // char ch[5]={'a','b','c','d','e'};

    // for(int i=0;i<5;i++)
    // {
    //     cout<<ch[i]<<endl;
    // }

    // // or single line execution 

    // cin>>ch;

    char ch[200];
    cin.getline(ch,200);
   cout<<ch;

// int len =findLength(ch,100);

// cout<<"The length is :"<< len <<endl;

cout<<"  The Length is "<<strlen(ch);
}