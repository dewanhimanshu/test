#include<iostream>
using namespace std;
void towerofhanoi(int n,char from,char to,char helper)
{
    if(n==0)
    {
 return;
    }
    towerofhanoi(n-1,from,helper,to);
    cout<<"\nmove disk "<<n<< " from "<<from<<" to "<<to;
    towerofhanoi(n-1,helper,to,from);


}

int main()
{
towerofhanoi(3,'a','b','c');

}
