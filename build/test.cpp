#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n,s=0;
    vector <int> a(n);//定义动态整型数组
    cin>>n;
    for (int i = 0; i < n; i++)cin>>a[i];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        s=0;
        for (int j = i; j < n; j++)
        {
            s+=a[j];
            if (s>ans)
            {
                ans=s;
            }   
        }   
    }
    cout<<ans<<endl;
    
    return 0;
}