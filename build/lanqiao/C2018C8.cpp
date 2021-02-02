/**
 * 2018年C组省赛第8题
 * 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<sstream>

using namespace std;
int main()
{
   stringstream ss;
   int n,t=1;
   cin>>n;
   while (ss.str().size()<4*n-4)
   {
       ss<<t;//循环拼接用stringstream
       t++;
   }
   string s=ss.str();
   for (int i = 0; i < n-1; i++)cout<<".";
   cout<<s[0]<<endl;
   //key:如何输出？
   for (int j = 2; j < n; j++)//负责输出到n-1行
   {
        for(int e=1;e<=n-j;e++)cout<<'.';
        cout<<s[j-1];
        //输出中间空格
        for(int a=1;a<=2*j-3;a++)cout<<'.';
        cout<<s[4*n-4-1-j+2]<<endl;
   }
   
   //输出最后一行,共2*n-1个数字
   for (int i = n-1; i < n-1+2*n-1; i++)cout<<s[i];
   cout<<endl;
   return 0;
}