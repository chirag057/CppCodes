#include<iostream>
using namespace std;

// void sumN(int i , int sum)
// {
// if(i<1)
// {
//     cout<<sum;
//     return;
// }
//  sumN(i-1,sum+i);

// }

// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;                 // Recursive way n + f(n);   This is called functional recursion 
//                                   // or n *f(n);
//     }

//     return n+sum(n-1);
// }

// int Factorial(int n )
// {
//     if(n==0)
//     { 
//       return 1;
//     }
//     return n * Factorial(n-1);
   
// }

// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }

void printArray(char arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

// void ReverseArray(int arr[],int l , int r)
// {
//     if(l>=r)
//     {
//         return;
//     }
//     swap(arr[l],arr[r]);
//     ReverseArray(arr,l+1,r-1);
// }


// void ReverseArrayParametrized(int i , int arr[], int n)
// {
//     if(i>=n/2) return;

//     swap(arr[i],arr[n-i-1]);
//     ReverseArrayParametrized(i+1,arr,n);

// }

int PalinndromeReverssed(int i , char s[], int n)
{
    if(i>=n/2) return true;
 
 else{
    if(s[i]!=s[n-i-1])
  return false;

    
 }
 return PalinndromeReverssed(i+1,s,n);
}
// Strivers code
// if(s[i]!=s[n-i-1])
// {
//     return false;
// }
// return PalinndromeReverssed(i+1,s,n);
// }




int main()
{

int n;
cin>>n;
// sumN(n,0);
// int s = sum(n);
// int k= Factorial(n);
// cout<<s<<endl;
// cout<<k;

// int Arr[n];
// for (int i = 0; i < n; i++)
// {
//    cin>>Arr[i];
// }


// // ReverseArray(Arr,0,n-1);
// // printArray(Arr,n);

// ReverseArrayParametrized(0,Arr,n);
// printArray(Arr,n);

char s[n];
for (int i = 0; i < n; i++)
{
   cin>>s[i];
}

int z =PalinndromeReverssed(0,s,n);
  if(z)
  {
    cout<<"win";
  }
  else
  {
    cout<<"lose";
  }
}