#include<iostream>
using namespace std;
int n;
int digit[6];
bool judge(int x)
{
    int m=0,sum=0;
    while (x)
    {
        digit[m++]=x%10;
        sum+=x%10;
        x/=10;
    }
    if (sum!=n)return false;
    //判断回文
    for (int i = 0; i < m/2; i++)
    {
        if (digit[i]!=digit[m-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool f=false;
    cin>>n;
    for (int i = 10000; i < 1000000; i++)//五位和六位
    {
        if (judge(i))
        {
            cout<<i<<endl;
            f=true;
        }
    }
    if (!f)
    {
        cout<<-1<<endl;
    }
    return 0;
}