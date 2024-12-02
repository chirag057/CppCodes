#include<iostream>
using namespace std;

// void BackTrackPrintN(int i , int n)
// {
//     if(i<1)
//     {
//         return;
//     }

//     BackTrackPrintN(i-1,n);
//     cout<<i<<endl;
// }


void BackTrackingPrintNtoOne(int i , int n)
{
    if(i>n)
    {
        return;
    }
    BackTrackingPrintNtoOne(i+1,n);
    cout<<i;
}


int main()
{
 int n;
 cin>>n;
// BackTrackPrintN(n,n);

BackTrackingPrintNtoOne(1,n);

}