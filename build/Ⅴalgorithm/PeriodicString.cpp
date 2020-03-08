#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

//简单类型，不知道对不对
// int main()
// {
//     string s;//存在于C++
//     cin>>s;
//     int i=0,res;
//     char c=s[i];
//     for (i=1; s[i]&&s[i]!=c; i++);
//     cout<<i<<endl;
//     return 0;
// }

int main()
{
    char word[100];
    scanf("%s",word);
    int len=strlen(word);
    for (int i = 1; i < len; i++)
        if (len%i==0)
        {
            int ok=1;
            for (int j = i; j < len; j++)
                if (word[j]!=word[j%i])
                {
                    ok=0;
                    break;
                }
            if(ok){
                printf("%d\n",i);
                break;
            }
            
        }
        return 0;
    
}


