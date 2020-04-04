/**
 * 输入两个数NM
 * 判断n-m之间有多少个没有数字4的数字
*/
#include<iostream>
using namespace std;
bool judge(int i)
{
    while (i)
    {
        if (i%10==4)
        {
            return true;
        }
        i/=10;
    }
    return false;
}

int main()
{
     int n,m,cnt=0;
     cin>>n>>m;
     for (int i = n; i <= m; i++)
     {
         if (!judge(i))
         {
             cnt++;
         }
     }
     cout<<cnt<<endl;
     return 0;
}