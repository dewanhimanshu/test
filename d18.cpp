#include<iostream>
using namespace std;
class graph
{
    int lis[100][100];
      int ans[100][100];
    int siz;
public:
    graph()
    {
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                lis[i][j]=0;
                ans[i][j]=0;
            }
        }
        siz=1;

    }
    void addedge()
    {
        cout<<"enter 2 verties";
        int v1;
        int v2;
        cin>>v1>>v2;
        while(v1!=-1||v2!=-1)
        {
            lis[v1][v2]=1;
            lis[v2][v1]=1;
            if(v1>siz)
            {
                siz=v1;

            }
            else if(v2>siz)
            {
                siz=v2;

            }
            cin>>v1>>v2;

        }

    }
    void getgraph()
    {
        for(int i=0; i<=siz; i++)
        {
            for(int j=0; j<=siz; j++)
            {
                if(lis[i][j]!=0)
                {
                    cout<<"\nthere is an edge between"<<i<<":"<<j;
                }
            }

        }

    }



    void matrix()
    {
        cout<<endl;
        for(int i=0; i<=siz; i++)
        {
            for(int j=0; j<=siz; j++)
            {
                cout<<lis[i][j]<<"\t";
            }
            cout<<endl;

        }

    }

    void matrixa()
    {
        cout<<endl;
        for(int i=0; i<=siz; i++)
        {
            for(int j=0; j<=siz; j++)
            {
                cout<<ans[i][j]<<"\t";
            }
            cout<<endl;

        }

    }
    void mutiply()
    {
        int s = 0;
        for(int i=0; i<siz; i++)
        {
            for(int j=0; j<siz; j++)
            {
               s=0;
                for(int k=0; k<siz; k++)
                {
                    s+=lis[i][k]*lis[k][j];
                }
                lis [i][j] = s;
            }
        }
    }
    int noofpaths(int v1,int v2,int n)
    {
     for(int i=0;i<n;i++)
     {
        mutiply();
     }
     return ans[v1][v2];


    }

};
int main()
{

    graph g;
    g.addedge();
    g.matrix();
    cout<<endl<<"enter the vertices and path length";
    int v1;
    int v2;
    int n;
    cin>>v1>>v2;

    cout<<endl<<g.noofpaths(v1,v2,n);
     g.matrixa();






}
