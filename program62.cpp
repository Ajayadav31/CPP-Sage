#include<iostream>
using namespace std;
int sum(int ,int,int=0);
int main()
{
    int a=10,b=10;
    cout<<sum(a,b);
    return 0;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}