#include<string.h>
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
bool is_prime(int n)
{
    if (n==2)return true;
    if(n<2)return false;
    for (int i = 2; i < sqrt(n); i++)
        if(n%i==0)return false;
    return true;
}

int prime[100],count=0;
int main()
{
    int n,p[100];
    cin>>n;
    //求100以内的素数表
    for (int i = 2; i <=100; i++)
        if(is_prime(i))prime[count++]=i;
    while (scanf("%d",&n)==1)
    {
        printf("%d!=",n);
        memset(p,0,sizeof(p));
        int maxp=0;
        for (int i = 1; i <=n; i++)
        {
            int m=i;
            for (int j = 0; j < count; j++)
            {
                while (m%prime[j]==0)
                {
                    m/=prime[j];
                    p[j]++;
                    if(j>maxp)maxp=j;
                }
            }
            
            
        }
        for(int i=0;i<=maxp;i++)
                printf("%d",p[i]);
            printf("\n");
        
    }
    return 0;

}