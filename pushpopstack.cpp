#include<iostream>
#define max 5
using namespace std;
void mainmenu();
class stack
{
    int item,top,st[max];
    public:
    stack():top(-1){}
    void push();
    void pop();
    void display();
};
void stack::push()
{
    if(top==max-1)
    {
        cout<<"Stack is full.\n";
    }
    else
    {
        cout<<"Enter data to be pushed::";
        cin>>item;
        top++;
        st[top]=item;
    }
}
void stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty.\n";
    }
    else
    {
        item=st[top];
        cout<<item<<" is poped.\n";
        top--;
    }
}
void stack::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<st[i]<<"\n";
    }
}
void mainmenu()
{
    cout<<"STACK OPERATION:"<<endl;
    cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT"<<endl;
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