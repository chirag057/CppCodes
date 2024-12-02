#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[] , int n)
{
    int i=0;
    int j =n-1;

    while (i<=j)
    {
      if(ch[i]==ch[j])
      {
        i++;
        j--;
      }

      else{
        return false;
      }
    }
    
}

int main()
{

    char ch[100];
    cin.getline(ch,100);
    int len = strlen(ch);

    bool isPalindrome = checkPalindrome(ch, len);

    if(isPalindrome)
    {
        cout<<"Above is a palindrome"<<endl;
    }

    else{
      cout<<"Not a Palindrome";
    }




}