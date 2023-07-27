#include<iostream>
#define max 5
void mainmenu();
using namespace std;
class stack
{
    int item,bos,st[max];
    public:
    stack():bos(0){}
    void push();
    void pop();
    void display();
};
void stack::push()
{
    if(bos==max)
    {
        cout<<"Stack is full.\n";
    }
    else
    {
        for(int i=bos;i>0;i--)
        {
            st[i]=st[i-1];
        }
        cout<<"Enter data to be pushed::";
        cin>>item;
        st[0]=item;
        bos++;
    }
}
void stack::pop()
{
    if(bos==0)
    {
        cout<<"Stack is empty.";
    }
    else
    {
        item=st[0];
        cout<<item<<" is popped.\n";
        bos--;
        for(int i=0;i<bos;i++)
        {
            st[i]=st[i+1];
        }
    }
}
void stack::display()
{
    for(int i=0;i<bos;i++)
    {
        cout<<"Stored data is:"<<st[i]<<"\n";
    }
}
void mainmenu()
{
    cout<<"STACK OPERATION\n";
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
}
int main()
{
    stack s;
    int n;
    bool decision=true;
    while(decision)
    {
        mainmenu();
        cout<<"Enter your choice:";
        cin>>n;
    switch (n)
    {
    case 1:
        s.push();
        break;
    case 2:
        s.pop();
        break;
    case 3:
        s.display();
        break; 
    case 4:
        decision=false;
        break; 
    default:
        cout<<"Invalid input.";
    }
    }
    return 0;
}
