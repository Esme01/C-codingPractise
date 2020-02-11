
#include<iostream>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,n,temp=0;
    cin>>a>>b>>c;
    for ( n = 10; n <= 100; n++)
    {
        if(n%3==a && n%5==b && n%7==c)
        {
            temp++;
            cout<<n<<endl;
        }
    }

    if(temp==0)
    {
        printf("No answer");
    }
    return 0;
}