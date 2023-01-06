#include<iostream>
void display();
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class stack
{
private:
    int item;
    node *head;
public:
    stack():head(NULL){}
    void push();
    void pop();
    void display();
};

void stack::push()
{
    node *temp=new node();
    if(temp==NULL)
    {
        cout<<"Memory space is not available.\n";
    }
    cout<<"Enter the data to be pushed:";
    cin>>item;
    temp->data=item;
    temp->next=head;
    head=temp;
}

void stack::pop()
{
    node *temp=head;
    if(temp!=NULL)
    {
        item=temp->data;
        cout<<"Popped item is:"<<item;
        cout<<endl;
        head=temp->next;
        free(temp);
    }
    else
    {
        cout<<"Stack is empty.\n";
    }

}
void stack::display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        item=temp->data;
        cout<<"Stored item is:"<<item;
        cout<<endl;
        temp=temp->next;
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
