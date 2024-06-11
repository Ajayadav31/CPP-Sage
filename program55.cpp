#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int *q=p;
    
    cout<<"Address of a is : "<<p<<endl;
    cout<<"Address of p is : "<<q<<endl;
    cout<<"Content of a is : "<<*p;
}