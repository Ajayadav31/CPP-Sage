#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setValue(int x,int y)
        {
            a=x;
            b=y;
        }
        void displayData()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b;
        }
};
int main()
{
    Complex c;
    c.setValue(2,3);
    c.displayData();
    return 0;
}