#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

int main()
{
    int num,n,product=1;
    while (1)
    {
        num=scanf("%d",&n);
        if(num==EOF)break;
        if (num==1)product=product*(n%1000)%1000;
    }
    printf("%03d",product);
    return 0;
}