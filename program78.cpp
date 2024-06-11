#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void setDate(int a,int b,int c)
        {
            d=a,m=b,y=c;
        }
        void getDate()
        {
            cout<<"d="<<d<<",m="<<m<<",y="<<y;
        }
};
int main()
{
    Date d;
    d.setDate(31,12,2022);
    d.getDate();
}