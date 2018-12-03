#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,numarator=0,j,a=0;
    cin>>n;
    j=n;
    if(n==0)
    {
        numarator=1;
        return 0;
    }
    if(n>=0)
    {
        while(n>0)
        {
            n=n>>1;
            numarator++;
        }
    }
    else
        if(n==-1)
    {
        numarator=1;
        return 0;
    }
    else
        while(n<-1)
    {
        n=n>>1;
        numarator++;
    }
    if(j<0) j=-j;
    for(int i=numarator;i>0;i--)
    {
        n=j;
        n=n<<(32-i);
        n=n>>31;
        if(n==-1)
            n=1;
        else
            n=0;
        if(n==1)
            a+=pow(2,numarator-i);
    }
    if(a==j)
        cout<<"DA";
    else
        cout<<"NU";
}
