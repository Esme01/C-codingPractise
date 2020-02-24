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
    for ( abc = 111; abc <=999; abc++)
    {
        /* code */
        for ( de = 0; de <= 99; de++)
        {
            /* code */
            x=abc*(de%10);
            y=abc*(de/10);
            z=abc*de;
            sprintf(buf,"%d%d%d%d%d",x,y,z,abc,de);
            //sprintf的书写格式？
            ok=1;
            for ( i = 0; i < strlen(buf); i++)
            {
                /* code */
                if (strchr(s,buf[i])==NULL)
                {
                    /* code */
                    ok=0;
                    break;
                }
            }
            if (ok)
            {
                //count++;
                /* code */
                printf("<%d>\n",++count);
                printf("%5d\nX%4d\n----\n%5d\n%4d\n----\n%5d\n",abc,de,x,y,z);
                
            }
        }
        
    }
    printf("The number of solutions=%d",count);
   
   return 0; 
}
