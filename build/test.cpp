#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
const int MAXN=100;
int a[MAXN]={0};
//1是开，0是关
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j*i<=n;j++)
        {
            if(a[j*i]==1)a[j*i]=0;
            else
            {
                a[j*i]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}