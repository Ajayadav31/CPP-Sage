#include<iostream>
using namespace std;
int main()
{
    char arr[10];
    char brr[10];
    int i;
    cout<<"Enter a string :";
    cin>>arr;
    for(i=0;arr[i]!='\0';i++)
        brr[i]=arr[i];
    brr[i]='\0';
    cout<<brr;
    return 0;
}