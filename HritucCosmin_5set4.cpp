#include<iostream>
using namespace std;
int main()
{
    int i,n,maxim=0,x=0,a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        maxim=max(maxim,a);
        b=x;
        if(a==b)
        {
            x=a;
        }
        else
            if(a==0 || b==0)
        {
            if(a)
            {
                x=a;
            }
            else
            {
                x=b;
            }
        }
        else
        {
            while(a!=b)
            {
                if(a>b)
                    a-=b;
                else
                    b-=a;
            }
            x=a;
        }
    }
    cout<<maxim+x;
}
