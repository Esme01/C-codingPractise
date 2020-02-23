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
    scanf("%s",s);//输入的字符串前面不用加定位符，与输入数字不同
    for (abc =111; abc <= 999; abc++)
    {
        /* code */
        for ( de = 11; de <= 99; de++)
        {
            /* code */
            x=abc*(de%10);
            y=abc*(de/10);
            z=abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
            //把信息输出到字符串
            //相当于把这五个数合并变成一个字符串！
            //之后只要检测这个字符串中每个字符是否在集合里面即可
            ok=1;//判断变量
            for(i=0;i<strlen(buf);i++)
                if (strchr(s,buf[i])==NULL)
                {
                    /* code */
                    ok=0;
                }
            if (ok)
             {
                /* code */
                printf("<%d>\n",++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
                //用%4d的方法排列数的位置！妙！
             }
        }
        
    }
    printf("The number of solutions= %d\n",count);

   
   return 0; 
}
