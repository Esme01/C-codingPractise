#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n;
    vector<int> a(n+1);
    vector<int> b(n);
    cin>>n;
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
    //这样不会出现负数，但是结果不全
    //如何减才能不重不漏？
    
    cout<<max_element(b.begin(),b.end())-b.begin()<<endl;


    return 0;
}