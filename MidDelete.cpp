#include <iostream>

using namespace std;
int rev(int x)
{
    int r=0,a;
    while(x>0)
    {
        a=x%10;
        r=r*10+a;
        x=x/10;
    }
    return r;
}
int MidDelete(int x)
{
    int count=0,number=0;
    int a,b;
    a=x;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        count++;
    }
    if (count%2!=0)
    {
        int rv,a,dv;
        dv=count/2;
        rv=rev(x);
        int arr[count];
        for(int i=0;i<count;i++)
        {
            a=rv%10;
            rv=rv/10;
            arr[i]=a;
            
        }
        for (int i=dv;i<count;i++)
        {
            arr[i]=arr[i+1];
        }
        count=count-1;
        for (int i=0;i<count;i++)
        {
          number=number*10+arr[i]; 
        }
    }
    else
    {
        int rv,a,dv;
        dv=count/2;
        rv=rev(x);
        int arr[count];
        for (int i=0;i<count;i++)
        {
            a=rv%10;
            rv=rv/10;
            arr[i]=a;
        }
        for (int i=dv;i<count;i++)
        {
            arr[i-1]=arr[i+1];
        }
        count=count-2;
        for (int i=0;i<count;i++)
        {
          number=number*10+arr[i]; 
        }
    }
    return number;
}
int main()
{
    int a=124178567;
    cout<<MidDelete(a);
}
