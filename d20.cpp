#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        cout<<"\n****MENU DRIVEN PROGRAM*********";
        cout<<"\n1,you now the value of internal vertices";
        cout<<"\n2,you know the value of total vertices";
        cout<<"\n3,you know the value of leaf vertices";
        cout<<"\n4,exit";
        cout<<"\nenter your choice";
        int ch;
        cin>>ch;


        cout<<"\n enter the value of m";
        int m;
        cin>>m;
        int i,l,n;


        if(ch==1)
        {
            cout<<"\nenter the value of i";
            cin>>i;
            n=m*i+1;
            cout<<"\ntotal vertices is"<<n;
            l = n - i;
            cout<<"\ntotal leaf vertices"<<l;

        }
        else if(ch==2)
        {
        cout<<"\nenter the number of total vertices";
        cin>>n;
        i = (n-1)/m;
        cout<<"\ntotal number internal vertices  "<<i;
        l = n -i;
        cout<<"\ntotal leaf vertices"<<l;
        }
        else if(ch==3)
        {
        cout<<"\nenter the value of leaf nodes";
        cin>>l;
        n = (m*l-1)/(m-1);
        cout<<"\ntotal vertices is"<<n;
        i = n-l;
        cout<<"\n total number of internal vertices "<<i;

        }
        else
        {
            break;
        }
    }

}
