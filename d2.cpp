#include<iostream>
#include<stdlib.h>
#define s 100
using namespace std;
void bubbleSort(int arr[],int n)
{
    int temp;
    for(int i=0; i<(n-1); i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


}
/*
bool binarySearch(int a[],int x,int n)
{   int start=0,en=n-1;
    int mid=(start+en)/2;
    while(start<en)
    {
        if(a[mid]==x)
            return 1;
        else if(x>a[mid])
        {
            start=mid+1;
        }
        else
        {
            en=mid-1;
        }


    }
    return 0;

}
*/
bool sec(int a[],int x,int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
            return 1;

    }
    return 0;


}
int seci(int a[],int x,int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
            return i;

    }
    return -1;
}
                                                                                                                                                            void copywrite()
{

                                                                                                                                                                        cout<<"by-Himanshu Dewan";

}
void print(int a[],int n)
{

    //cout<<"\nelements in set is";
    for(int i=0; i<n; i++)
        {
        if(a[i]!=-1)
        cout<<a[i]<<"\t";
        }

}







class Set
{

public:
    int a[s],b[s];
    int n,m;

    Set()
    {
        n=m=0;
    }
    void input()
    {
        int k=0,i=0;
        cout<<"enter the elements in set a(press -1 to terminate)";
        while(k!=-1)
        {
            cin>>k;
            a[i]=k;
            i++;
            n++;
        }
        n--;

        k=0,i=0;
        cout<<"enter the elements in set b(press -1 to terminate)";
        while(k!=-1)
        {
            cin>>k;
            b[i]=k;
            i++;
            m++;
        }
        m--;




    }
    bool subset()
    {
        int i=0,j=0;
        for( i=0; i<m; i++)
        {
            for( j=0; j<n; j++)
            {
                if(a[i]==b[j])
                    break;
            }
            if(j==n)
                return 0;

        }
        return 1;

    }

    void inter()
    {

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
                    cout<<a[i]<<endl;

            }
        }

    }
    void unio()
    {
        int u[n+m];
        int siz=0;
        int k=0;
        for(int i=0; i<n; i++)
        {
            u[k++]=a[i];
            siz++;
        }

        for(int j=0; j<m; j++) // set b
        {
            if(!sec(u,b[j],siz))
            {
                u[k++]=b[j];
                siz++;
            }


        }
        for(int i=0; i<siz; i++)
        {
            cout<<u[i]<<"\t";

        }
    }
    void setdiffab()
    {
        for(int i=0; i<m; i++)
        {
            int index = seci(a,b[i],n);
            if(index!=-1)
            {
                for(int j=index+1; j<n; j++)
                {
                    a[j-1]=a[j];


                }
                n--;


            }






        }
        cout<<"elements in set A :";
        print(a,n);
        cout<<"elements in set B :";
        print(b,m);



    }
    void setdiffba()
    {
        for(int i=0; i<n; i++)
        {
            int index = seci(b,a[i],m);
            if(index!=-1)
            {
                for(int j=index+1; j<m; j++)
                {
                    b[j-1]=b[j];


                }
                m--;


            }






        }
        cout<<"elements in set A :";
        print(a,n);
        cout<<"elements in set B :";
        print(b,m);



    }
    void cartisian()
    {

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"("<<a[i]<<","<<b[j]<<")"<<"\t";

            }
            cout<<endl;


        }

    }
    void Symsetdiff()
    {
        int sys[m+n];
        int siz=0;
        int k=0;
        for(int i=0; i<n; i++)
        {
            sys[k++]=a[i];
            siz++;
        }
        for(int j=0; j<m; j++)
        {
            int f = seci(sys,b[j],siz);
                if(f!=-1)
                {  sys[f]=-1;
                }
                else if (f==-1)
                {
                     cout<<b[j]<<"\t";

                }
        }
       print(sys,siz);

    /*    bubbleSort(sys,k);
        print(sys,k);
        for(int i=0; i<siz-1; i++)
        {

            while(sys[i]==sys[i+1])
            {
                continue;
            }

            cout<<sys[i]<<"\t";

        }
        cout<<sys[k];


    */





    }

    void compliment()
    {
        int u[s];
        int i=0;
        int k=0,us=0;
        cout<<"enter the elements in universal set (press -1 to terminate)";
        while(k!=-1)
        {
            cin>>k;
            u[i]=k;
            us++;
            i++;
        }
        us--;




       for(int i=0;i<us;i++)
       {
            int index=seci(a,u[i],n);
                    if(index==-1)
                        cout<<u[i]<<"\t";




       }






    }







};





int main()
{

    Set o;
    while(1)
    {
        cout<<"\n***********MENU DRIVEN PROGRAM*******************";
        cout<<"\n1,input";
        cout<<"\n2,is it a subset?";
        cout<<"\n3,union";
        cout<<"\n4,intersection";
        cout<<"\n5,set difference(A-B)";
        cout<<"\n6,set difference(B-A)";
        cout<<"\n7,cartesian product";
        cout<<"\n8,compiment of set";
        cout<<"\n9.Symmetrical set difference";
        cout<<"\n10,exit";
        int ch;
        cout<<"\nenter the choice";
        cin>>ch;
        if(ch==1)
            o.input();
        else if(ch==2)
        {
            bool ans = o.subset();
            if(ans==0)
                cout<<"\nit is not a subset";
                    else
                    cout<<"\nyes it is subset";
                }


                    else if(ch==3)
                    o.unio();
                    else if(ch==4)
                    o.inter();
                    else if(ch==5)
                    o.setdiffab();
                    else if(ch==6)
                    o.setdiffba();
                    else if(ch==7)
                    o.cartisian();
                    else if(ch==8)
                    o.compliment();
                    else if(ch==9)
                     o.Symsetdiff();
                    else if(ch==10)
                    {   cout<<"\n********END OF PROGRAM***********";
                        copywrite();
                        exit(0);
                    }


                    else
                    cout<<"\nwrong choice";

                }
        }
