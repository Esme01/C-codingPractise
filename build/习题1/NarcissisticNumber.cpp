#include<cstdio>
#include<iostream>
#include<fstream>
#include<math.h>
#include
using namespace std;
int main()
{
//      重定向
//    #ifdef LOCAL
//         freopen("xxx.in","r",stdin);
//         freopen("xxx.out","w",stdout);
//    #endif //LOCAL
//     int n;
//     for(n=100;n<=999;n++)
//     {
//         if(pow(n%10,3)+pow(n/10%10,3)+pow(n/100,3)==n)
//         {
//         cout<<n<<endl;
//         }
//     }
//     return 0;


//fopen版
    FILE *fout;
    fout=fopen("xxx.out","wb");

    int n;
    for(n=100;n<=999;n++)
    {
        if(pow(n%10,3)+pow(n/10%10,3)+pow(n/100,3)==n)
        {
            //cout<<n<<endl;
            fprintf(fout,"%d",i);
        }
    }
    fprintf(fout,"\r\n");

    return 0;
}