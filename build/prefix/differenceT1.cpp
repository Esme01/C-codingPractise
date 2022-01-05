/*
    差分就是前缀和的逆运算
*/
#include<iostream>
using namespace std;
const int N=100010;

int n,m;
int a[N],b[N];

void insert(int l,int r,int c)
{
    b[l]+=c;
    b[r+1]-=c;
}

int main()
{
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)scanf("%d",&a[i]);
    for (int i = 1; i <= n; i++)insert(i,i,a[i]);
    //构造原数列 b[i]
    /*
        b1=a1
        b2=a2-a1
        b3=a3-a2-a1
        ......
    */
   while (m--)
   {
       int l,r,c;
       scanf("%d%d%d",&l,&r,&c);
       insert(l,r,c);
   }
    //求结果（b[i]的前缀和）
   for (int i = 1; i <= n; i++)b[i]+=b[i-1];
   for (int i = 1; i <= n; i++)printf("%d ",b[i]);
   return 0; 
}