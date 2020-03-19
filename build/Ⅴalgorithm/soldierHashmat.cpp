#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int n,m;
    while (scanf("%d %d",&n,&m)==2)
    {
        int c=n-m>0?n-m:m-n;
        printf("%d\n",c);
    }
    return 0;
    
    
}