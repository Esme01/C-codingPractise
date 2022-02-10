#include <stdio.h>
int main()
{
        int n,i,j,flag;
        
        while((scanf("%d",&n))!=EOF)
        {
                flag=0;
                for(i=2;i<n;i++)
                {
                        for(j=2;j<i;j++)
                        {
                                if(i%j==0)
                                        break;
                        }
                        if(j==i&&(i-1)%10==0)
                        {
                                if(!flag)
                                {
                                        printf("%d",i);
                                    flag=1;
                                }
                                else
                                        printf(" %d",i);

                        }
                }
                                if(flag)
                                printf("\n");
                else if(!flag)
                        printf("-1\n");
        }
    return 0;

} 
