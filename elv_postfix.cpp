#include<iostream>
using namespace std;
class postfix
{
    public:
    char postf[20];
    float stack[20];
    int top;
    postfix():top(-1){}
    void push(float);
    float pop();
};
void postfix::push(float x)
{
    top++;
    stack[top]=x;
}
float postfix::pop()
{
    float a;
    a=stack[top];
    top--;
    return a;
}
int main()
{
    postfix p;
    cout<<"Enter the postfix expression::";
    cin>>p.postf;
    float a,b;
    for(int i=0;p.postf[i]!='\0';i++)
    {
        switch(p.postf[i])
        {
            case '+':
            a=p.pop();
            b=p.pop();
            p.push(b+a);
            break;
            case '-':
             a=p.pop();
            b=p.pop();
            p.push(b-a);
            break;
            case '*':
            a=p.pop();
            b=p.pop();
            p.push(b*a);
            break;
            case '/':
            a=p.pop();
            b=p.pop();
            p.push(b/a);
            break;
            default :
                p.push(p.postf[i]-48);
                break;

        }
    }
    cout<<"The result of postfix expresssion is:"<<p.stack[0];
    return 0;
}