#include<iostream>
#define MAX 5
void mainmenu();
using namespace std;
class queue
{
    int rear,front,qu[MAX],item;
    public:
    queue():rear(-1),front(-1){}
    void enqueue();
    void dequeue();
    void display();
};
void queue::enqueue()
{
    if(front==(rear+1)%MAX)
    {
        cout<<"Queue is full.\n";
    }
    else
    {
        cout<<"Enter the to be enqueue::";
        cin>>item;
        if(rear==-1)
        {
            rear=0;
            front=0;
            qu[rear]=item;
        }
        else
        {
            rear=(rear+1)%MAX;
            qu[rear]=item;
        }
    }
}
void queue::dequeue()
{
    if(front==-1)
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        item=qu[front];
        cout<<item<<" is dequeue.\n";
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
    }
}
void queue::display()
{
    if(front>rear)
    {
        for(int i=front;i<MAX;i++) 
        {
           cout<<"Stored item is:"<<qu[i]<<"\n"; 
        }
        for(int i=0;i<=rear;i++)
        {
            cout<<"Stored item is:"<<qu[i]<<"\n";
        }
    }
    else
    {
    for(int i=front;i<=rear;i++)
    {
        cout<<"Stored item is:"<<qu[i]<<"\n";
    }
    }
}
 void mainmenu()
 {
    cout<<"QUEUE OPERATION\n";
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
 }
 int main()
 {
    queue s;
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
        s.enqueue();
        break;
    case 2:
        s.dequeue();
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