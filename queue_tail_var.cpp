#include<iostream>
#define MAX 5
void mainmenu();
using namespace std;
class queue
{
    int rear,front,qu[MAX],item;
    public:
    queue():rear(-1),front(0){}
    void enqueue();
    void dequeue();
    void display();
};
void queue::enqueue()
{
    if(rear==MAX-1)
    {
        cout<<"Queue is full.\n";
    }
    else
    {
        cout<<"Enter the to be enqueue::";
        cin>>item;
        rear++;
        qu[rear]=item;
    }
}
void queue::dequeue()
{
    if(rear==-1)
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        item=qu[front];
        cout<<item<<" is dequeue.\n";
        for(int i=0;i<rear;i++)
        {
            qu[i]=qu[i+1];
        }
        rear--;
    }
}
void queue::display()
{
    for(int i=0;i<=rear;i++)
    {
        cout<<"Stored item is:"<<qu[i]<<"\n";
    }
}
 void mainmenu()
 {
    cout<<"QUEUE OPERATION\n";
    cout<<"1.ENQUEUE\n2.DEQUEUE\n3.Display\n4.Exit\n";
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