#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int p[100]={0},flag,t=0;
    for (int i = 2; i <= 100; i++)
    {
        flag=1;
        for (int j = 2; j <= sqrt(i); j++)
        //必须是j <= sqrt(i)，不能少了=，不然4也是“素数”
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)p[t++]=i;
    }
    

    int n,k=0;
    long long m=1;
    int s[30]={0};
    cin>>n;

    for (int j = 1; j <= n; j++)m*=j;//53！就超了,如何处理大数的阶乘？
    for (;;)
    {
        if (p[k]==0)break;
        while (m%p[k]==0)
        {
            s[k]++;
            m/=p[k];
        }
        if(m==1)break;
        k++;
    }
    
    for (int i = 0; i < 30; i++)
            printf("%d ",s[i]);
    return 0;

}