#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=1,n,a,b=3,c,cz;
    cin>>n;
    cout<<2<<' ';
    while(i<n)
    {
        cz=1;
        a=3;
        c=(int)sqrt(b)+1;
        if(a*a==b)
            cz=0;
        else
            while(a<b)
        {
            if(b*a==0)
            {
                a=b;
                cz=0;
            }
            a+=2;
        }
        if(cz==1)
        {
            cout<<b<<' ';
            i++;
        }
        b+=2;
    }
}
