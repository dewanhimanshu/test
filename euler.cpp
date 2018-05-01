#include<iostream>
using namespace std;
class graph
{
    int siz;
    int lis[100][100];
    int n;

    public:
    graph()
    {
        cout<<"\nenter the number of vertices you want";
        cin>>siz;
        for(int i=0;i<siz;i++)
        {
            for(int j=0;j<siz;j++)
            {
                lis[i][j]=0;
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
    void input()
    {
        cout<<"\nenter the vertices in pairs";
        int v1 =0,v2=0;

        while(v1!=-1)
        {
            cin>>v1;
            cin>>v2;
            if(v1!=-1)
            {
            lis[v1][v2] = 1;
            lis[v2][v1] = 1;
            }
        }
    }
    int  degree(int n)
    {
        int deg=0;
        for(int i=0;i<siz;i++)
        {
            if(lis[n][i]==1)
            {
                deg++;
            }
        }

        return deg;


    }
    void tell()
    {
        int odd=0;
        cout<<"\nenter the number of verices in path";
        int c;
        cin>>c;
        int temp[c];
        cout<<"\nenter the vertices";
        for(int i=0;i<c;i++)
        {
            cin>>temp[i];
        }
        for(int i=0;i<c;i++)
        {
            int deg = degree(temp[i]);
            cout<<"\ndegree is "<<temp[i]<<" : "<<deg;
            if(deg%2==1)
            {
             odd+=1;
            }
        }

        if(odd==0)
        {
        cout<<"\neuler path and circuit";
        }
        else if(odd==2)
        {
            cout<<"\neuler path";
        }
        else
        {
        cout<<"\n not";
        }

    }


};

int main()
{
    graph g;
    g.input();
    g.matrix();
    g.tell();

}
