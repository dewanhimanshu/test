#include<iostream>
using namespace std;
int fib(int n)
{
    return n==0||n==1?1:fib(n-1)+fib(n-2);

}
int main()
{

    int n;
    cout<<"enter the number of terms you want";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<"\t";

    }
return 0;


}
