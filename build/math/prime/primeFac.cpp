//质因子分解
#include<iostream>
#include<stdio.h>
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

int main()//最暴力的写法
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int s=0;
        for (int i = 2; i <=  a; i++)//质因子的范围是2-sqrt(a)
        {
            s=0;
            if (isPrime(i)&&a%i==0)
            {
                while(a%i==0)
                {
                    a/=i;
                    s++;
                }
                cout<<i<<" "<<s<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}