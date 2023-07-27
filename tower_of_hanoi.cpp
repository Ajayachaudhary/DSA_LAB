#include<iostream>
using namespace std;
void toh(int n, char source,char aux,char dest)
{
    if(n==0)
    {
        return;
    }
    else
    {
        toh(n-1, source,dest,aux);
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest;
        cout<<endl;
        toh(n-1,aux,source,dest);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of disk:";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
