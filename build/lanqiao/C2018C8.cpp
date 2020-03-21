/**
 * 2018年C组省赛第8题
 * 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char s[300];
    int n,m=1,j=0;
    cin>>n;
    while (strlen(s)<2*(2*n-2))//尽管输入，之后再删除
    {
        sscanf(s,"%d",m);//会自动进行字符串的累加吗
        m++;
    }
    cout<<s<<endl;
    return 0;
    
    
}