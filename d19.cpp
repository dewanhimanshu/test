#include<iostream>
using namespace std;
class graph
{
    int siz;
    int lis[100][100];
    int count;
public:
    graph()
    {
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                lis[i][j]=0;
            }
        }
        count=0;

    }
    void input()
    {
        int v1=0;
        int v2[100];
        while(v1!=-1)
        {
            cout<<"\nenter the vertix";
            cin>>v1;
            cout<<"\nenter the no vertices adjacent to it";
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
            cout<<"enter adjacent vertices";
            cin>>v2[i];
            }
            if(n%2==1)
            {
                count++;

            }



        }


    }
    void tell()
    {
        if(count==0)
        {
            cout<<"\neuler circuit";
        }
        else if(count==2)
        {
            cout<<"\neuler path";
        }
        else
        {
            cout<<"\nkuch nahi";
        }






    }


};

int main()
{
    graph g;
    g.input();
    g.tell();

}
