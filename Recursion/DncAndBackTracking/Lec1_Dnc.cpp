#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int arr[], int s , int e)
{
    // take all the neccessary required values
    int mid =(s+e)/2;
    int leftLeng =mid-s+1;
    int rightLeng = e-mid;
    
    // create two new dynamic arrays for split arrays
    int *left = new int[leftLeng];
    int *right = new int[rightLeng];


   // copy the elemnets of original array to left array 
    int k = s;
    for(int i =0;i<leftLeng;i++)
    {
        left[i]=arr[k];
        k++;
    }
  // copy the elemnets of original array to right array 
     k = mid+1;
    for(int i = 0;i<rightLeng;i++)
    {
        right[i]=arr[k];
        k++;
    }

    // merge the two arrays [2- Pointer logic]
     int leftIndex =0;
     int rightIndex =0;
     // yahi galti karenege original array ka index ka s hai we should not use 0
     int originalArrayIndex = s;

     while(leftIndex<leftLeng && rightIndex < rightLeng)
     {
        if(left[leftIndex]<right[rightIndex])
        {
            arr[originalArrayIndex]=left[leftIndex];
            originalArrayIndex++;
            leftIndex++;

        }

        else{

            arr[originalArrayIndex] = right[rightIndex];
            originalArrayIndex++;
            rightIndex++;
        }
        // case 1 left array ke elements exhaust hogaye copy all the rest of right elements as it is 
     }
      while(rightIndex<rightLeng)
      {
        arr[originalArrayIndex]=right[rightIndex];
        originalArrayIndex++;
        rightIndex++;
      }
        // case 2 right array ke elements exhaust hogaye copy all the rest of left elements as it is 
          while(leftIndex<leftLeng)
      {
        arr[originalArrayIndex]=left[leftIndex];
        originalArrayIndex++;
        leftIndex++;
      }

      // Always delete the memory at the end 
      delete[] left;
      delete[] right;
}

void mergeSort(int arr[], int s , int e)  // 0(nlogn)
{
    if(s>=e) return;
    int mid =(s+e)/2;
  // recursive call for left array 
    mergeSort(arr ,s ,mid);
    // recursive call for right array 
    mergeSort(arr , mid+1 ,e);
    // merge the both arrays
    mergeTwoSortedArrays(arr,s,e);
}

// do inplace MergeSort
int main()
{
    int arr[]={2,15,6,9,4,1};
    int size =6;
    int s=0;
    int e =size-1;
    cout<<"Before merge Sort " <<endl;
     for(int i =0 ;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    mergeSort(arr,s,e);
    cout<<"After merge Sort " <<endl;
    for(int i =0 ;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }


}


