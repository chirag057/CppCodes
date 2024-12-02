#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void printArray (int arr[] , int size , int index)
{
    // base case 
    if(index >= size)return;

    // processing

    cout<<arr[index]<<" ";

    //recursive call
     printArray(arr,size , index+1);


     // if you want to reverse the priting order put the recursive call before the printing
}

bool findInArray(int arr[] , int size , int target , int index)
{
    if(index>=size){return false;} 

    if(arr[index==target]){return true;} 

     bool  ans = findInArray(arr,size,target,index+1);
     return ans;

}

void findMinimum (int arr[] , int size , int index , int &mini )
{
    if(index>=size) return ;

    mini = min(mini,arr[index]);
    findMinimum(arr,size,index+1,mini);
}

// do the same for maximum number using recursion


void findEven(int arr[], int size , int index , vector<int> &v)  // storing by reference prints th values correctly!!!
{
    if(index>=size) return;

    if(arr[index]%2==0) v.push_back(arr[index]);

    findEven(arr,size,index+1,v);    
}

void doubletheArray(int arr[], int size , int index)
{
    if(index>=size) return;

    arr[index]*=2;

    doubletheArray(arr,size,index+1);
}

void findMax(int arr[], int size , int index , int &Currmax)
{
    if(index>=size) return;
     
    Currmax =max(Currmax , arr[index]);

    findMax(arr,size,index+1,Currmax);
}

int findInArrayValue(int arr[], int size , int index, int target)
{
    if(index>=size) {return -1;
    }
    if(arr[index]==target) 
    {
    return index;
    }

   return findInArrayValue(arr,size,index+1,target);
}

void printAllOccurenes(int arr[], int size , int index , int target)
{
    if(index>=size) return ;

    if(arr[index]==target) cout<<index<<endl;

     printAllOccurenes(arr,size,index+1,target);
}

void printDigitAll(int num)
{
    if(num==0) return;

    int digit = num%10;
    num=num/10;

    printDigitAll(num);

    cout<<digit<<endl;

}


int main()
{
    int arr[]={1,2,0,4,4};
    int size=5;
    int index =0;
    int target =4;


//   printAllOccurenes(arr,size,index,target);

int num= 4128;
printDigitAll(num);



//    int Maxi= findInArrayValue(arr,size,index,target);
//    cout<<Maxi;


    // int currMax = INT16_MIN;
    // findMax(arr,size,index,currMax);
    // cout<<currMax<<endl;

    // vector<int> v;
    // findEven(arr,size,index,v);
    //     for (int num : v) {
    //     cout << num << " ";
    
    // int mini=INT16_MAX;
    // findMinimum(arr,size,index,mini);
    // cout<<mini<<endl;
//     int Target =50;
//    cout<< "Target : " <<findInArray(arr,size,Target,index)<<endl;

}
    
