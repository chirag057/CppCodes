#include<iostream>
using namespace std;
// Fibonacci 

int fibonacci(int n)
{
    if(n<=1)
    return n;
    int last = fibonacci(n-1);
    int but1= fibonacci(n-2);
    return last+but1;
}
 int main()
 {
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;

 }