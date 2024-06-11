#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    int i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        cout<<"Enter element : ";
        cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum=sum+arr[i][j];
        }cout<<"Student n0 = "<<i+1<<"total="<<sum<<endl;
    }
    
    return 0;
}