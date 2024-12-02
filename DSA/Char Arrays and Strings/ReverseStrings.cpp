#include<iostream>
#include<string.h>
using namespace std;

void Reversal(char ch[], int n)
{
   int i=0;
   int j=n-1;

   while (i<=j)
   {
     swap(ch[i],ch[j]);
     i++;
     j--;
   }
   
   
}

int main()
{
    char ch[100];

    cin.getline(ch,100);
    int len = strlen(ch);
    cout<<"Before: "<<ch << endl;
     Reversal(ch,len);
     cout<<"After: "<<ch<<endl;

     strrev(ch);
     cout<<"Using Inbuilt Function"<<"\t"<<ch;

}