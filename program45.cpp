#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,n;
    for(i=0;i<=9;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    cout<<"Enter no to search : ";
    cin>>n;
    for(i=0;i<=9;i++)
    {
        if(arr[i]==n)
            break;
    }
    if(i==10)
        cout<<"Number not found";
        else
            cout<<"No is at "<<i+1<<" Index";
    return 0;
}