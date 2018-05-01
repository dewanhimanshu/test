#include<iostream>
using namespace std;
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<"\t";
    }
    cout<<endl;



}
void bubblesort(int a[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {   for(int j=0;j<n-i-1;j++)
        {    c++;
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
        cout<<"comparison between "<<i<<" is "<<c<<endl;
        print(a,n);
        c=0;
    }



}

int main()
{
    cout<<"enter the size of array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);


}
