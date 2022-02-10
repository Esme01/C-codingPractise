//筛素数
//朴素筛法[埃氏筛法]
/*
#include<iostream>
#include<algorithm>

using namespace std;

const int N=1000010;

int primes[N],cnt;
bool st[N];

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
        {
            primes[cnt++]=n;
        }
        for(int j=i+i;j<=n;j+=i)st[j]=true;
    }
}

int main()
{
    int n;
    cin>>n;

    get_primes(n);

    cout<<cnt<<endl;
    return 0;
}
*/

//线性筛法 : 比埃氏筛法更快
#include<iostream>
#include<algorithm>

using namespace std;

const int N=1000010;

int primes[N],cnt;
bool st[N];//记录是否为素数

void get_primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if(!st[i])primes[cnt++]=i;//st[i]==false,表明 i 是素数
        for (int j = 0; primes[j]<=n/i; j++)
        {
            st[primes[j]*i]=true;
            if(i%primes[j]==0)break;
            //primes[j]一定是i的最小质因子
        }
    }
}

int main()
{
    int n;
    cin>>n;

    get_primes(n);

    cout<<cnt<<endl;
    return 0;
}