#include<iostream>
using namespace std;
int main()
{
    int n,i,rem,x,sum;
    cout<<"Enter a no: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=i;
        sum=0;
        while(x>0)
        {
            rem=x%10;
            sum=sum+rem*rem*rem;
            x=x/10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
