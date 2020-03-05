#include<iostream>
using namespace std;
#define MAX 987654321

long long cal1(long long n)
{
    long long x=1;
    for (long long i = 1; i <= n; i++)
    {
        x=x*i%MAX;
    }
    return x;
}

long long cal2(long long n,long long m)
{
    return cal1(n)/(cal1(m)*cal1(n-m)%MAX);
}

int main()
{
    long long n,m,i=0,s=0;
    cin>>n>>m;
    long long c1=cal2(n,m);
    for (i = 0; i <= n; i++)
    {
        s+=c1*cal2(n,i)%MAX*i%MAX*i%MAX*i%MAX;
    }
    // printf("%ld",s);
    cout<<s<<endl;
    return 0;

}