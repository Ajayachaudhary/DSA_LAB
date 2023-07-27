//Insertion sort
#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
     insertion(arr,n);
     display(arr,n);
return 0;
}
