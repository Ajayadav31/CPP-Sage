#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[5][10];
    int i,X;
    for(i=0;i<5;i++)
    {
        cout<<"Enter name : ";
        cin>>str[i];
    }
    for(i=0;i<5;i++)
    {
        X=strlen(str[i]);
        cout<<"Length="<<X<<endl;
    }
    return 0;
}