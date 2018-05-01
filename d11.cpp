#include<iostream>
using namespace std;
int fact(int n)
{
    return n==0||n==1?1:n*fact(n-1);

}
int per(int n,int r)
{
    if(n<=0||r<=0||n<r)
    {
        cout<<"not possible";
        return -1;
    }

    return fact(n)/fact(n-r);

}
int comb(int n,int r)
{
    if(n<=0||r<=0||n<r)
    {
        cout<<"not possible";
        return -1;
    }
    return fact(n)/(fact(r)*fact(n-r));

}

int main()
{
    while(true)
    {   cout<<"Menu driven program"<<endl;
        cout<<"1,permutation"<<endl;
        cout<<"2,combination"<<endl;
        cout<<"\nenter your choice"<<endl;
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int n,r;
            cout<<"enter n and r"<<endl;
            cin>>n>>r;
            cout<<per(n,r)<<endl;
        }
        else if(ch==2)
        {
          int n,r;
            cout<<"enter n and r"<<endl;
            cin>>n>>r;
            cout<<comb(n,r)<<endl;

        }
        else
           break;

    }


}
