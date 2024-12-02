#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printF(int index , int arr[], vector <int> &v , int n)
{
    if(index==n)
    {
        for(auto it :v)
        {
            cout<<it<<" ";
        } 
    
        if(v.size()==0)
        {
            cout<<"{}";
        }
         cout<<endl;
    return;
    }
    
   

    v.push_back(arr[index]);
    printF(index+1,arr,v,n);
    v.pop_back();
    printF(index+1,arr,v,n);


}


int main()
{
 int arr[] = {3,1,2};
    vector<int> v;
    printF(0, arr, v, 3);
    return 0;
}