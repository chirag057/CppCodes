#include<iostream>
using namespace std;


class stack{
    public :
    int *arr;
    int size;
    int top;

    stack(int size)
    {
        arr = new int[size];
        this->size =size;
        this->top =-1;
    }

    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else{
        top++;
        arr[top]=data;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
        top--;
        }

    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }

        
    }

    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
        return arr[top];
        }
    }

    int getSize()
    {
        return top+1;
    }


};

int main()
{
    // // no element try to remove - underflow
    // // last in first out format
    // stack<int> st;
    // stack<char>st;
    // stack<string> st;

    // st.push(2);
    // st.pop();
    // st.size();
    // st.empty();
    // st.top();
    
    stack st(8);

    st.push(10);
    cout<<st.peek()<<endl;
    
    

    


}