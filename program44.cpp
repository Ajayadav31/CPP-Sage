#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,sum=0;
    for(i=0;i<=9;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Avg is : "<<sum/10.0;
    return 0;
}