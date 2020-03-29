#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //int s[18];
    int n,m=0;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<j)
            {
                int s=1;
                for (int t = i; t <=j; t++)s*=a[t];
                if (s>m)m=s;
            }
        }
    }
    if (m<0)cout<<-1<<endl;
    else cout<<m<<endl;
    return 0;
}