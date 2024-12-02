#include<iostream>
using namespace std;

void quickSort(int arr[], int start , int end)  // Tc O(N^2)
{
    if(start>=end) return;

    int pivot = end;
    int i =start -1;
    int j = start;

    while(j<pivot)
    {
        if(arr[j]<arr[pivot])
        {
              ++i;
              swap(arr[i],arr[j]);
        }
        j++;
    }
    ++i;
    swap(arr[i],arr[pivot]);
    quickSort(arr,start , i-1);
    quickSort(arr,i+1 , end);
}

int main()
{
    int arr[]={2,5,7,2,5,6,1};
    int start =0;
    int end =6;
    quickSort(arr,start,end);
    for(int nums:arr)
    {
        cout<<nums<<endl;
    }
}