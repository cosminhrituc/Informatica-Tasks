#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,i,n,x=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
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
         while(a!=b)
         {
             if(a>b)
                a-=b;
             else
                b-=a;
         }
    }
    cout<<a;

}
