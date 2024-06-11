#include <iostream>
using namespace std;
int main() 
{
    int i,n,num,count;   
    cout << "Enter the value of n: ";
    cin >> n;
    for(num=1;num<=n;num++)
    {
        count=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0&& num!=1)
            cout<<num<<endl;
    }
    return 0;
}

