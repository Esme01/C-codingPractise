#include<iostream>

using namespace std;
int A[55][55];
int main()
{
    int n,m,ans=-1005;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>A[i][j];
        }
    }

    //枚举子阵的上下左右边界
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                for (int h = k; h < m; h++)
                {
                    //计算
                    int temp=0;
                    for (int e = i; e <= j; e++)
                    {
                        for (int f = k; f <= h; f++)
                        {
                            temp+=A[e][k];
                        }
                    }
                     if (temp>ans)ans=temp;
                }
                
            }
            
        }
        
    }
    cout<<ans<<endl;
    return 0;
}