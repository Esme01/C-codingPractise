#include <iostream>
using namespace std;
double score[1000+10];
int main()
{
    bool flag = false;
    int n,i,j,max=0;
    double v;
    cin>>n;

    //先确定又多少个分数
    for(i=0;i<n;i++)
        cin>>score[i];

    for(i=0;i<n;i++)
    {
        j = i-1;
        v = score[i];
        while(j>=0&&score[j]>v)
        {
            score[j+1] = score[j];
            j--;
        }
        score[j+1] = v;
    }
    //排序


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(score[j]!=score[i])
                break;
        }
        if(j-1-i>max)
            max = j-1-i;
        i = j-1;
    }
    //找到出现次数最多的那个


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(score[j]!=score[i])
                break;
        }
        if(j-1-i==max)
        {
            if(flag)
                cout<<' ';
            //flag用来标记是否是第一个要输出的分数
            //第一个要输出的分数之前不用输出空格
            flag = true;
            cout<<score[i];
        }
        i = j-1;
    }

    /**
     * 第一个循环先计算出最多出现的次数，
     * 第二个循环输出出现次数为max的分数
     * */

    cout<<endl;
    return 0;
}