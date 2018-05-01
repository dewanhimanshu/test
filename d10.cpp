#include<iostream>
#include<ctype.h>
using namespace std;
void swa(char ch[] , int s , int e)
{

    char temp = ch[s];
    ch[s]=ch[e];
    ch[e]=temp;



}
void permute(char ch[], int s , int e)
{
    if(e-s==1)
        {

        cout<<ch<<endl;

        }
    else
    {
        for(int i=s;i<e;i++)
        {
            swa(ch,i,e);
            permute(ch,s+1,e);
            swa(ch,i,e);



        }


    }





}

int main()
{
    char ch[100];
    cout<<"enter the string";
    cin>>ch;
    int n = sizeof(ch);
    cout<<ch;
    permute(ch,0,n-2);




}
