# include<iostream>
# include<stdio.h>
# include<string.h>
# define MAXN 100+10
int s[MAXN];

using namespace std;
int main()
{
    int b,n,i=0;
    scanf("%d",&b);
    scanf("%d",&n);
    while (n!=0)
    {
        s[i]=n%b;
        n/=b;
        i++;
    }

    for (int j = i-1; j >=0 ; j--)
    {
        cout<<s[j];
    }
    cout<<endl;
    return 0;

}