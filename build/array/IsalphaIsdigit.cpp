#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100+10
using namespace std;

// char s[MAXN];
int main()
{
   char c;
   scanf("%c",&c);
   if(c>='a'&&c<='z'||c>='A'&&c<='Z')printf("isapha");
   if(c>='0'&&c<='9')printf("isdigit");
   return 0; 
}
