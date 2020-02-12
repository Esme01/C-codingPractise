/*triangle*/
#include<cstdio>
#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int N=n;
    for ( ; n >= 1; n--)
    {
        /* code */
        for (int j = N-n; j > 0; j--)
            {
                /* code */
                printf(" ");
            }
        for (int i = 2*n-1; i >= 1; i--)
        {
            /* code */
            printf("#");
        }
           for (int j = N-n; j > 0; j--)
            {
                /* code */
                printf(" ");
            }
        printf("\n");
        
    }
    
}
