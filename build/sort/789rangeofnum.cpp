/*
7.6+
789.数的范围
    利用二分法求一个数的起止坐标

*/
#include<iostream>
using namespace std;
const int N=100010;
int n,m;
int q[N];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)scanf("%d",&q[i]);

    while(m--)
    {
        int x;
        scanf("%d",&x);//输入一个查询数，就
        int l=0,r=n-1;
        while (l<r)
        {
            int mid=l+r>>1;//想清楚二分的判断
            if(q[mid]>=x)r=mid;
            else l=mid+1;
        }
        //退出while循环时，l=r
        if(q[l]!=x)cout<<"-1 -1"<<endl;
        else
        {
            cout<<l<<' ';
            //找右边
            int l=0,r=n-1;
            while (l<r)
            {
                int mid=l+r+1>>1;
                //由if()中的判断决定，在这中状况下需要+1
                if(q[mid]<=x)l=mid;
                else r=mid-1;
            }
            cout<<l<<endl;
        }
    }
    return 0;
}