#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
 using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    printf("%.*lf\n",c,1.0*a/b);
    //保留的小数位数是个变量，怎么办？
    //当小数位数是变量时，用 * 占位
}