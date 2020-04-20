#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)cin>>a[n];
    int t;
    //排序
    for (int j = n-1; j > 0 ; j--)
    {
         for (int i = 0; i < j; i++)
        {
            if (a[i]>a[i+1])
            {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
            }
        }
    }

    for (int i = 0; i < n-1; i++)b[i]=a[i+1]-a[i];
    sort(b,b+n-1);
    

    
    


    return 0;
}