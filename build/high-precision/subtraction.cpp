/*
    7.15+
*/
#include<iostream>
#include<vector>
using namespace std;
//判断是否有A>=B
bool cmp(vector<int> &A,vector<int> &B)
{
    //首先比较位数
    if(A.size()!=B.size())return A.size()>B.size();
    for(int i=A.size()-1;i>=0;i--)//从高位开始比较
        if(A[i]!=B[i])
            return A[i]>B[i];
    return true;//A=B
}

vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for(int i=0,t=0;i<A.size();i++)
    {
        t=A[i]-t;//减去借位
        if(i<B.size())t-=B[i];
        C.push_back((t+10)%10);
        if(t<0)t=1;//向前一位进位
        else t=0;
    }
    //需要去掉前导0
    while (C.size()>1&&C.back()==0)C.pop_back();
    //若只有一个0则要留下
    return C;
}

int main()
{
    string a,b;//用字符串读入
    vector<int> A,B;
    cin>>a>>b;//字符串输入
    for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
    //判断AB大小
    if(cmp(A,B))
    {
        vector<int> C=sub(A,B);
        for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    }
    else
    {
        vector<int> C=sub(B,A);
        printf("-");
        for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    }
    return 0;
}