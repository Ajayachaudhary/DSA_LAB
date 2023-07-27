//bubble sort
#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<=(n-2);i++)
    {
       for(j=0;j<=(n-i-2);j++)
       {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }

}

void display(int arr[],int n)
{
    cout<<"Sorted\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter how many number::";
    cin>>n;
    cout<<"Enter the datas::\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     bubble(arr,n);
     display(arr,n);
return 0;
}
