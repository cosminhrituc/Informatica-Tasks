#include<iostream>
using namespace std;
int main()
{
    int n,numarator=0,j;
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
    for(int i=1;i<=numarator;i++)
    {
        n=j;
        n=n<<(32-i);
        n=n>>31;
        if(n==-1)
            n=1;
        cout<<n<<endl;
    }
}
