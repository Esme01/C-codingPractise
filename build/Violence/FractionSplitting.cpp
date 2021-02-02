#include<iostream>

using namespace std;
int main()
{
    int k,x,y,c=0;
    cin>>k;
    for ( y = k+1; y <=2*k; y++)
    {
        if (k*y%(y-k)==0){
            x=k*y/(y-k);
			c++;
            printf("1/%d=1/%d+1/%d\n",k,x,y);
        }
    }
    return 0;
}
