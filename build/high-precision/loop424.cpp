#include<iostream>
#include<vector>
using namespace std;

const int N=110;

int n;
int nums[N],power[N];

vector<int> mul(vector<int> &A, int b)
{
    vector<int> C;
    int t=0;
    for (int i = 0; i < A.size()||t; i++)
    {
        t+=A[i]*b;
        C.push_back(t%10);
        t/=10;
    }
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

int main()
{
    string str;
    // int k;
    // vector<int> A;
    cin>>str>>n;
    for(int i=0;i>=0;i--)A.push_back(a[i]-'0');
    // vector<int> C=mul(A,k);
    //如何存储后 K 位数据 找到循环数？
    /*
        后 K 位 相当于 mod 10^k

        性质①：
        前 k+1 位的所有循环节长度，一定是 前 k 位循环节长度的子集。
        因此我们可以从小到大一位一位递推出前 k位的循环节长度。

        性质②：
        所有循环节，必然是最小循环节的整数倍
        ∴要求Lk 则枚举 nL k-1(n=1,2,3...)

        循环节长度也需要用 高精度 来存储
        需要写两个高精度
        1、高精度 x 高精度
        2、低精度 x 低精度


    */

    // for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);

    return 0;
}