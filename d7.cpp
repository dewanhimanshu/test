#include<iostream>
using namespace std;

 int  binarySearch(int a[],int x,int start,int en)
{   if(start>en)
        return -1;
    int mid=(start+en)/2;
    if(a[mid]==x)
    {
        cout<<"\nelement found";
        return mid;
    }
    else if(x>a[mid])
    {
        binarySearch(a,x,mid+1,en);
    }
    else
    {
        binarySearch(a,x,start,mid-1);

    }



}
int main()
{   int n;
    cout<<"\nenter the number of elements you want to enter";
    cin>>n;
    int a[n];
    cout<<"\n enter the elements(in ascending order) ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"\nenter the element you want to search";
    cin>>x;

    int i = binarySearch(a,x,0,n-1);
    if(i==-1)
        cout<<"\nelement not found";
    else
        cout<<"\nelement found at index "<<i;

}
