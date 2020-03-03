# include<iostream>
# include<stdio.h>
# include<string.h>
# define MAXN 100+10
char s[MAXN];

using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    while (n>1)
    {
         if (n%2!=0)
    {
        n=3*n+1;
        i++;
    }
    else
    {
        n/=2;
        i++;
    }

    }
    cout<<i<<endl;
    return 0;
   

}