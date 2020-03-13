 #include<iostream>
 #include<stdio.h>
 #include<stdlib.h>
 #include<algorithm>
 #include<math.h>
 #include<string.h>

using namespace std;

// int main()
// {
//     int n;
//     while (scanf("%d",&n)==1)
//     {
//         int k=1,s=0;
//         for(;;)
//         {
//             s+=k;
//             if (s>=n)//所求项是第K条对角线的倒数第s-n+1个元素
//             {
//                 printf("%d/%d",s-n+1,k-s+n);
//                 break;
//             }
//             k++;
            
//         }
//     }
//     return 0;
// }

//代数的解法
int main()
{
    int n;
    while (scanf("%d",&n)==1)
    {
        int k=(int)floor((sqrt(8.0*n+1)-1)/2-1e-9)+1;
        int s=k*(k+1)/2;
        printf("%d/%d",s-n+1,k-s+n);
    }
    return 0;
    
}