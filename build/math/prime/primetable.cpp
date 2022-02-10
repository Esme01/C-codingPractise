//求解100以内的素数表
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2)return false;
    for (int i = 2; i <= n/i; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int prime[101],pNum=0;
bool p[101]={0};
void Find_Prime(){//求素数表
    for (int i = 1; i < 101; i++)
    {
        if (isPrime(i)==true)
        {
            prime[pNum++]=i;
            p[i]=true;
        }
    }
}

int main()
{
    Find_Prime();//在日常使用时很容易忘写，因此结果不对时要检查是否漏写
    for (int i = 0; i < pNum; i++)
    {
        printf("%d",prime[i]);
    }
    return 0;
}
