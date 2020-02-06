#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
    int count=0;
    scanf("%d", &n);
    //long long n = n2;
    while(n > 1)
    {  
        if(n%2 != 0)
		{
			 n = (n * 3 + 1)/2;
			 count=count+2;
		}
        else
		{
			 n = n / 2;
			count++;
		}
    }
    printf("%d\n", count);
    return 0;
}