#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st , int &element)
{
 if(st.empty())
 {
    st.push(element);
    return;
 }

 int temp =st.top();
 st.pop();
 //Ek case tumm solve karo baki recursion sambhal lega

 insertAtBottom(st,element);

 // backtracking karte hai
 st.push(temp);
}

void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    reverseStack(st);
   insertAtBottom(st,temp);
}


void inserSorted(stack<int> &st , int element)
{
    // yaha par galti hogi st.empty dalna bhul jayenge
    if(st.empty() || element >st.top())
    {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    // Ek case tum solve karo baki recursion sambhal lega

    inserSorted(st,element);

    // backtracking
    st.push(temp);

}

void sortStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);

    inserSorted(st,temp);

}



int main()
{
    stack<int>st;
    st.push(8);
    st.push(12);
    st.push(9);
    // int element = 400;
    // cout<<"Before the insert :"<<st.size()<<endl;

    // insertAtBottom(st,element);

    // cout<<"After the size :"<<st.size()<<endl;


//   reverseStack(st); 
 //  inserSorted(st,0);
 sortStack(st);
    while (!st.empty())
    {
       cout<<st.top()<< " "<<endl;
       st.pop();
    }
    



}