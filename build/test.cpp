#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,ok,abc,de,x,y,z,count=0;
    char s[20],buf[99];
    scanf("%s",s);
    for ( abc = 111; abc < 999; abc++)
    {
        /* code */
        for ( de = 0; de < count; de++)
        {
            /* code */
            x=abc*(x%10);
            y=abc*(x/10);
            z=abc*de;
            sprintf(buf,x,y,z);
            //sprintf的书写格式？

        }
        
    }
    
   
   return 0; 
}
