#include<iostream>
#define s 100
using namespace std;

class relation
{
    int n;
    int a[s][s];


public:
    void input()
    {
        for(int i=0;i<s;i++)
        {   for(int j=0;j<s;j++)
                a[i][j]=0;


        }
        cout<<"enter its range";
        cin>>n;

        cout<<"enter the elements(press -1,-1 to terminate it";
        int i,j;
        while(true)
        {
            cin>>i;
            cin>>j;
            if(i==-1)
                break;
            a[i][j]=1;


        }



    }
    bool refexive()
    {
        for(int i=0;i<n;i++)
        {       if(a[i][i]!=1)
                    return 0;

        }
        return 1;
    }
    bool syms()
    {

        for(int i=0;i<n;i++)
            {   for(int j=0;j<n;j++)
                    if(a[i][j]==1)
                        if(a[j][i]!=1)
                            return 0;


            }
        return 1;


    }
    bool asyms()
    {
        for(int i=0;i<n;i++)
        {   for(int j=0;j<n;j++)
                if(a[i][j]==1)
                    if(a[j][i]==1)
                        if(i!=j)
                            return 0;


        }
        return 1;



    }
    bool trans()
    {
        for(int i=0;i<n;i++)
        {   for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                   {  //cout<<a[i][j]<<"\t"<<a[j][k]<<"\t"<<a[i][k]<<"\n";
                        if(a[i][j]==1&&a[j][k]==1)
                        if(a[i][k]!=1)
                            return 0;
                    }

            }




        }
        return 1;



    }
    bool eui()
    {

        if(refexive()&&syms()&&trans())
            return 1;
        return 0;

    }
    bool poset()
    {

        if(refexive()&&asyms()&&trans())
            return 1;
        return 0;

    }
    void print()
    {
        for(int i=0;i<n;i++)
        {   for(int j=0;j<n;j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;


        }

    }



};


int main()
{
relation o;
    while(true)
    {
        cout<<"menu driven program"<<endl;
        cout<<"1,input"<<endl;
        cout<<"2,refexive"<<endl;
        cout<<"3,sysmetric"<<endl;
        cout<<"4,transitive"<<endl;
        cout<<"5,antisymteric"<<endl;
        cout<<"6,equivalence set"<<endl;
        cout<<"7,POSET"<<endl;
        cout<<"8,print"<<endl;
        cout<<"9,exit"<<endl;
        cout<<"enter your choice"<<endl;
        int ch;
        cin>>ch;
        if(ch==1)
        {   o.input();
        }
        else if(ch==2)
        {   if(o.refexive())
                cout<<"it is reflexive"<<endl;
            else
                cout<<"it is not reflexive"<<endl;
        }
        else if(ch==3)
        {
            if(o.syms())
                cout<<"it is symetric"<<endl;
            else
                cout<<"it is not symetric"<<endl;


        }
        else if(ch==4)
        {
            if(o.trans())
                cout<<"it is transitive"<<endl;
            else
                cout<<"it is not transitive"<<endl;

        }
        else if(ch==5)
        {
            cout<<o.asyms()<<endl;


        }
        else if(ch==6)
        {

        cout<<o.eui();

        }
        else if(ch==7)
        {

            cout<<o.poset();

        }
        else if(ch==8)
            {   o.print();
            }
        else
            break;

    }






}

