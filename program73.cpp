#include<iostream>
#include<string.h>
using namespace std;
void subString(char arr[], int start,int end=10)
{
    int i;
    for(i=start;i<end&&arr[i]!='\0';i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    char str[]={"AJAYYADAV"};
    subString(str,0,4);
 subString(str,0);
}