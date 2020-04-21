#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool prime(int n)
{
    bool flag=true;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag=false;
            return flag;
        }
    }
    return flag;
}

int main()
{
    int s[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n;
    cin>>n;
    
    do{
        bool f=true;
        int t;
        for (int i = 0; i < n-1; i++)
        {
            t=s[i]+s[i+1];
            f=prime(t);
            if (f==false)break;
        }

        if (f==true)
        {
            if (prime(1+s[n-1])!=true)f=false;
        }
        

        if(f==true){
            //从整数1开始逆时针排序输出？
            //可以先找到1的位置，之后再输出

            //绝招：不改变1的位置
            for (int j = 0; j < n; j++)cout<<s[j]<<" ";
            cout<<endl;
        }
    }while (next_permutation(s+1,s+n));
    //从第二个数才开始排列
    return 0;
}