#include<iostream>
using namespace std;
int main()
{
    char str[10];
    cout<<"Enter your name : ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
        cout<<str[i]<<endl;
    return 0;
}