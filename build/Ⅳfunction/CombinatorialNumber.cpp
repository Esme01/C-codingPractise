#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>

using namespace std;
int cal(int n)
{
    int i=1,s=1;
    for ( i = 1; i <= n; i++)
    {
        s*=i;
    }
    return s;
}

int main()
{
    int n,m,c;
    cin>>n>>m;
    c=cal(n)/(cal(n-m)*cal(m));
    cout<<c<<endl;
    return 0;//正常运行

}