#include<iostream>
#include<algorithm>
using namespace std;

void printPermutation(string &str , int i)
{
   if(i>=str.length())
   {
    cout<<str<<endl;
    return;
   }

   for(int j = i ; j<str.length();j++)
   {
    swap(str[i],str[j]);
    printPermutation(str,i+1);
    // backtracking nulliifies the equation[we do this to nullify the equatiion for passing by refrence]
    swap(str[i],str[j]);
   }
}

//rat in a maze 


int main()
{
      string str ="abc";
      int index =0;
      printPermutation(str,index);
}