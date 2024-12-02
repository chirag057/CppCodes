#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(int arr[], int size , int index)
{
    if(index>=size-1)
    {
        return true;
    }

    if(arr[index]>arr[index+1])
    {
        return false;
    }
   return checkSorted(arr, size, index + 1);

}
  
int binarySearch(int arr[], int s , int e, int target)   // o(logn)
{
    if(s>e) return -1;

    int mid = s+(e-s)/2;
    if(arr[mid]==target) return mid;

    if(arr[mid]<target) 
    {
        return binarySearch(arr , mid+1 , e , target);
    }

    else{
        return binarySearch(arr , s , mid-1 , target);
    }

}

// include exclude pattern

void printSubsequences (string input , string output , int index)
{
    if(index>=input.length())
    {
        cout<<output<<endl;
        return;
    }

    char ch = input[index];

    // exclude
    printSubsequences(input , output , index+1);

    //include
    output.push_back(ch);
    printSubsequences(input , output , index+1);

    // include 
    // output.push_back(ch);
    //  printSubsequences(input , output , index+1);

    // //exclude
    // output.pop_back();
    // printSubsequences(input , output , index+1);


}

int maximisethecuts (int n , int x , int y , int z)  // link : https://www.geeksforgeeks.org/problems/cutted-segments1642/1 [it is originally solved using dp will give tle for this ]
{
    if(n==0) return 0;

    if(n<0) return INT32_MIN;

    int option1 = maximisethecuts(n-x , x , y , z);
    int option2 = maximisethecuts(n-y , x , y , z);
    int option3 = maximisethecuts(n-z , x , y , z);

    return max(option1,max(option2,option3));
}

int coinchange(vector<int> & coins , int amount)
{



}

   
int rob (vector <int> & nums)   // link : https://leetcode.com/problems/house-robber/
{
     
}

int fun(int x , int y)
{
    if(x==0) return y;

    return fun(x-1,x+y);
}


int main()
{
    // int arr[] ={10,20,30,40,50};
    // int size =5;
    // int target =50;
    // int start = 0;
    // int end = size-1;

    // int found = binarySearch(arr,start,end,target);

    // if(found!=-1)
    // {
    //     cout<<"It is at index "<<found<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }


    // bool isSorted = checkSorted(arr,size,index);
    // if(isSorted) cout<<"The array is sorted"<<endl;
    // else cout<<"It is not sorted"<<endl;

    // string input = "abc";
    // string output ="";
    // int index =0;
    // printSubsequences(input,output,index);


cout<<fun(5,2)<<endl;

}