#include<iostream>
#include<math.h>
using namespace std;
#define size 100
class poly
{
    int info[size];
public:
    poly()
    {
        for(int i=0;i<size;i++)
        {
            info[i] = 0;
        }

    }
    poly(int coeff , int deg)
    {
        info[deg]=coeff;
    }

    void setcoeff(int coeff , int deg)
    {

        info[deg]=coeff;
    }

    double evaluate(double n)
    {
        double ans = 0;
        for(int i=0;i<size;i++)
        {


            if(info[i]!=0)
            {
                ans+=info[i]*pow(n,i);
            }
        }
        return ans;

    }


};



int main()
{

poly p;
p.setcoeff(2,2);
p.setcoeff(3,1);
cout<<p.evaluate(2);


}
