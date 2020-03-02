# include<iostream>
# include<stdio.h>
# define MAXN 100+10
int s[MAXN];

using namespace std;
int main()
{
    int t,i=0,max=0,m=1;
    while (scanf("%d",&t))
    {
        s[i++]=t;
    }
    //先排序,一共有i个分数。采用冒泡排序的方法
    int temp;
    for(int j=0 ;j < i-1; j++)
    {
        for (int k = 0; k < i-j-1; k++)
        {
            if (s[k]>s[k+1])
            {
                temp=s[k+1];
                s[k+1]=s[k];
                s[k]=temp;
            }
        }
    }

    //找到最大次数
    int tmax=0,ts;
    for (int j = 0; j < i; j++)
    {
        temp=s[j];
        for (int n = 0; n < i; n++)
        {
            if (temp==s[n])
            {
                tmax++;
            }
        }
        if (tmax>max)max=tmax;
        tmax=0;
    }

    printf("%d\n",max);


     for (int j = 0; j < i; j++)
    {
        temp=s[j];
        for (int n = 0; n < i; n++)
        {
            if (temp==s[n])
            {
                tmax++;
            }
        }
        if (tmax==max)
        {
            printf("%d ",temp);
        }
        
        tmax=0;
    }
    printf("\n");


    for (int j = 0; j < i; j++)
    {
        cout<<s[j]<<" ";
    }
    return 0;
}