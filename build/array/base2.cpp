# include<iostream>
# include<stdio.h>
# include<string.h>
# include<math.h>
# define MAXN 100+10
int s[MAXN];

using namespace std;
int main()
{
    int b,n,temp,res=0,i=0;
    cin>>b>>n;
    while (n!=0)
    {
        temp=n%10;
        n/=10;
        res+=pow(b,i++);
    }
    cout<<res<<endl;
    return 0;
}