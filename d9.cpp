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
void insertionsort(int a[],int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
          c++;
         a[j+1]=a[j];
         j--;

        }

   cout<<"no of comparisons in pass "<<i<<" is "<<c<<endl;
   c=0;
        a[j+1]=key;
    print(a,n);
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
    insertionsort(a,n);


}
