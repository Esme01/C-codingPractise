 #include<iostream>
 #include<stdio.h>
 #include<stdlib.h>
 #include<algorithm>
 #include<string.h>

using namespace std;
bool compare1(int a,int b)
{
    return a>b;//降序
}
bool compare2(int a,int b)
{
    return a<b;//升序
}

int operate(int a)
{
    int a1[4],a2[4],temp,t1=0,t2=0;
    temp=a;
    for (int i = 3; i >=0; i--)
    {
        a1[i]=temp%10;
        a2[i]=temp%10;
        temp/=10;
    }
    //sort会改变数组本身
    sort(a1,a1+4,compare1);
    sort(a2,a2+4,compare2);
    for (int i = 0; i<4; i++)
    {
        t1=t1*10+a1[i];
        t2=t2*10+a2[i];
    }
    return t1-t2;
}

int main()
{
    int a,s[1000]={0},j=0,t;
    bool flag=1;
    cin>>a;
    s[0]=a;
    while (j<1000-1&&flag==1)
    {
        t=operate(s[j]);
        //s[++j]=t;
        //先判断，后加上去
        for (int i = 0; i < 1000; i++)
             if(t==s[i])
             {
                 flag=0;
                 s[++j]=t;
                 break;
             }
        //当flag==0时，依然会赋值
        if(flag!=0)s[++j]=t;
    }
    int m=1;
    cout<<s[0];
    while (s[m]!=0)printf("->%d",s[m++]);
    cout<<endl;
    return 0;
}
