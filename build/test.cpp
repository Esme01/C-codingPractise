#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int getTime()
{
   char line[100];//缓冲流
   int h1,h2,m1,m2,s1,s2,d=0;
   cin.getline(line,25);
   if(strlen(line)==17)sscanf(line,"%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
   else sscanf(line,"%d:%d:%d %d:%d:%d(+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);
   return (d+h2-h1)*3600+(m2-m1)*60+s2-s1;

}


int main()
{
   int n,a,b,dur;
   (cin>>n).get();//消除队列里面的换行符
   for (int i = 0; i < n; i++)
   {
      a=getTime();
      b=getTime();
      dur=(a+b)>>1;
      printf("%02d:%02d:%02d",dur/3600,dur/60%60,dur%60);
   }

   
   return 0;

}