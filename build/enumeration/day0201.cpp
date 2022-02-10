//52个字符，求字符不是重复出现的个数
//双指针法，一个指针原地不动，另一个指针向下滑动，对比，不用则+1


#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
// const int N=53;
// char q[N];
// int main()
// {
//     int s=0;
//     for (int i = 0; i < N; i++)cin>>q[i];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i+1; j < N; j++)
//         {
//             if(q[i]==q[j]){
//                 //字母第一次出现，可以找到对应的位置，第二次出现则不能找到
//                 if(j-i>1)s++;
//             }
//         }
//     }
//     cout<<s/2<<endl;
// }

vector<int> p[26];//vector数组
int main()
{
    string s;
    cin>>s;//cin可以一次性输入一串字符串

    for (int i = 0; i < s.size(); i++)
        p[s[i]-'A'].push_back(i);
        //每个动态vector里面存储2个数
    
    int res=0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = i+1; j < 26; j++)
        {
            int cnt=0;
            for(auto y:p[j])//枚举之后的每个字母的位置，每个字母有两个位置
                if(p[i][0]<y && y<p[i][1])
                    cnt++;

            if(cnt==1)res++;
        }
    }
    cout<<res<<endl;
    return 0;
}
