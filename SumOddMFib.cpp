#include <iostream>

using namespace std;

long mfib(int n)
{
    int t1=1,t2=2,t3=3,nt;
    int f[n*2];
    for (int i=1;i<n*2;i++)
    {
        if (i==1)
        {
            f[i]=t1;
            continue;
        }
        if (i==2)
        {
            f[i]=t2;
            continue;
        }
        if (i==3)
        {
            f[i]=t3;
            continue;
        }
        nt=t1+t2+t3;
        t1=t2;
        t2=t3;
        t3=nt;
        f[i]=nt;
    }
    int fsize=*(&f+1)-f;
    int sum=0,count=0;
    for (int i=0;i<fsize;i++)
    {
        if(f[i]%2!=0)
        {
            sum+=f[i];
            count++;
        }
        if (count==n)
        break;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<mfib(n);

    return 0;
}
