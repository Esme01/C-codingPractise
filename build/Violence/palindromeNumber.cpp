#include<iostream>
#include<vector>
#define M 100000

using namespace std;
int main()
{
    int t=0,s;
    //字符数组要开辟多大？
    cin>>s;
    while (t<2)
    {
        for (int i = 2; i <=10; i++)
        {
            int m=s,e=0;
            char a[M];
            while (m!=0)
            {
                a[e++]=m%i;
                m=m/i;
            }
            //进制转换
            bool flag=1;
            if (e%2==0)
            {
                int x2=e-1,x1=0;
                while (x2>x1)
                {
                    if (a[x1]!=a[x2]){
                        flag=0;
                        break;
                    }
                    else
                    {
                        x1++;
                        x2--;
                    }
                }                
            }
            //判断回文数（偶数个数）
            else
            {
                int x2=e-1,x1=0;
                while (x2>=x1)
                {
                    if (a[x1]!=a[x2]){
                        flag=0;
                        break;
                    }
                    else
                    {
                        x1++;
                        x2--;
                    }
                }
            }
            //判断回文数（奇数个数）
            if (flag==1)
                t++;
            if(t>=2){
                cout<<s<<endl;
                break;
            }
        }
        s++;
    }
    return 0;
}