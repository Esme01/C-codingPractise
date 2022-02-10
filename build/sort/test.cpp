#include<iostream>
#include<stdio.h>
using namespace std;
const int N=100010;
int n,m;
int q[N];

int main()
{
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&q[i]);
    }
    while (m--)
    {
        int s;
        scanf("%d",&s);
        int l=0,r=n-1;
        while (l<r)
        {
            int mid=(l+r)>>1;
            if (q[mid]>=s)r=mid;//
            else l=mid+1;
        }
        //跳出while的时候l=r
        if(q[l]!=s)cout<<"-1 -1"<<endl;
        else
        {
            cout<<l<<' ';
            l=0,r=n-1;
            while (l<r)
            {
                int mid=(l+r+1)>>1;
                if (q[mid]<=s)l=mid;//l左边是符合要求的，右边是不符合要求的
                else r=mid-1;
                
            }//跳出while循环时，l==r
            cout<<l<<endl;
        } 
    }
    return 0;
}