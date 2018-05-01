#include<iostream>
using namespace std;
class graph{
    int lis[100][100];
    int siz;
    int ans[100][100];

public:
graph()
{
    for(int i=0;i<100;i++)
     {
        for(int j=0;j<100;j++)
        {
            lis[i][j]=0;
            ans[i][j]=0;
        }

     }
     siz=0;

}
void set()
{
    int v1=0;
    int v2=0;
    while(v1!=-1)
    {
    cout<<"\nenter the vertix 1 :";
    cin>>v1;
    cout<<"\nenter the vertix 2 : ";
    cin>>v2;
    lis[v1][v2]=1;
    lis[v1][v2]=1;
    ans[v1][v2]=1;
    ans[v2][v1]=1;
    if(v1>siz)
    {
        siz=v1+1;
    }
    else if(v2>siz)
    {
        siz=v2+1;
    }



    }
}
void matrix()
{
    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<siz;j++)
        {
            cout<<lis[i][j]<<"\t";
        }
        cout<<endl;

    }

}
int  paths(int v1,int v2,int n)
{


    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<siz;j++)
        {
            ans[i][j]=lis[i][j];
        }
    }
    for(int i=1;i<n;i++)
    {
    mul();
    }
    return ans[v1][v2];

}
void mul()
{
 int s =0;
 int temp[siz][siz];
 for(int i=0;i<siz;i++)
 {
    for(int j=0;j<siz;j++)
    {
        temp[i][j]=0;
    }
 }
  for (int i = 0; i < siz; i++)
    {
        for (int j = 0; j < siz; j++)
        {
            temp[i][j]=0;
            for (int k = 0; k < siz; k++)
          {
              temp[i][j]+=(ans[i][k]*lis[k][j]);

          }



        }




    }

    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<siz;j++)
        {
            ans[i][j]=temp[i][j];
        }
    }
}
void print()
{
    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<siz;j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }

}


};

int main()
{

graph g;
g.set();
g.matrix();
cout<<"\nenter the two vertices";
int v1,v2,n;
cin>>v1>>v2;
cout<<"\nenter the n ";
cin>>n;
cout<<"\n ans is "<<g.paths(v1,v2,n);
g.print();


return 0;
}
