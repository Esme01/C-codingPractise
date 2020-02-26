#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100+10
using namespace std;

char s[MAXN];//声明长度不小于10^7应该放在main函数外
int main()
{
    // int t,aver,num=0,i=0,sum=0;
    // fgets(s,sizeof(s),stdin);
    // while (s[i]!='\n')
    // {
    //     if (s[i]==' ')
    //     {
    //         i++;
    //         continue;
    //     }
    //     else
    //     {
    //         num++;
    //         t=0;
    //         while (s[i]!=' ')
    //         {
    //             t++;
    //             i++;
    //             //还有大写字母和小写字母
    //         }
    //         sum=sum+t;
    //     }
    // }
    // aver=sum/num;
    // cout<<aver<<endl;
    
    //换一个角度，从字母入手
    //并且用flag来标记单词
    fgets(s,sizeof(s),stdin);
	int cnt = 0 ;
	int len = strlen(s);
	int flag = 1 , d = 0;
	for(int i = 0;i<len;i++){
		if(isalpha(s[i])){
			//if(0-flag!=0)cnt++;
            if(flag==1)cnt++;
			flag = 0;
			d++;
		}else{flag = 1;}
	}
	printf("the length is %d , the number is %d , %.2lf\n",d,cnt,1.0*d/cnt);
    return 0;
}
