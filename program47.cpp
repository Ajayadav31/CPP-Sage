#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}