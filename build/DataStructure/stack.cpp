#include<iostream>
using namespace std;

struct stack
{
    int data[10000];
    int top=-1;//栈顶元素位置，栈为空，所以为-1
    void push(int x)
    {
        top++;
        if (top<10000)
        {
             data[top]=x;
        }else
        {
            top--;
            cout<<"stack overflow"<<endl;
        }       
    }

    void pop(){
        if (top>=0)
        {
            top--;
        }
    }

    int topval()
    {
        if(top>=0){
            return data[top];
        }
    }
};



int main()
{
    stack s;
    for (int i = 1; i <=10; i++)
    {
        s.push(i);
    }
    for (int i = 1; i <=10; i++)
    {
        cout<<s.topval()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}