#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
const int maxn=1000;
struct bign
{
    int len,s[maxn];
    bign(){memset(s,0,sizeof(s));len=1;}
    /**
     * 构造体中有一个函数，成为构造函数（constructor）
     * 是C++中特有的，作用是初始化
    */
    bign operator=(const char* num)
    {
        len = strlen(num);
        for (int i = 0; i < len; i++)s[i]=num[len-i-1]-'0';
        //字符型变成整型
        return *this;
    }
    /**
     * 可以把这个字符串转化为“逆序数组+长度”的内部表示方法
    */
   bign operator = (int num)
   {
       char s[maxn];
       sprintf(s,"%d",num);
       *this=s;
       return *this;
   }
   /**
    * 支持x=1234这样更常用的赋值方式
   */

    bign(int num){*this=num;}
    bign(const char* num){*this=num;}
    //让代码支持“初始化”操作

    /**
     * 以上只是简单地调用刚才的赋值运算符，接下来需要提供一个函数把它转换为字符串
     *
    */
    string str()const
    {
        string res="";
        for (int i = 0; i < len; i++)res=(char)(s[i]+'0')+res;//字符串的连接？
        if(res=="")res="0";
        return res;
    }

    //重载bign的常用运算符
    //①加法原理(减法和除法、乘法原理类似)
    bign operator +(const bign& b)const
    {
        bign c;
        c.len=0;
        for (int i = 0,g=0; g||i<max(len,b.len); i++)
        {
            int x=g;
            if (i<len)x+=s[i];
            if (i<b.len)x+=b.s[i];
            c.s[c.len++]=x%10;
            g=x/10;
        }
        return c;

    }
    //重新定义+=运算符.
    bign operator +=(const bign& b)
    {
        *this =*this +b;
        return *this;
    }

    //定义比较操作
    bool operator < (const bign& b)const
    {
        if(len!=b.len)return len<b.len;
        for(int i=len-1;i>=0;i--)
            if(s[i]!=b.s[i])return s[i]<b.s[i];
        return false;
    }


};

/**
 * 接下来，重新定义>>和<<运算符，让输入输出流直接支持bign结构体
 * 这样，就可以用cout<<x的方式打印它。
*/

istream& operator >> (istream &in,bign& x)
{
    string s;
    in >> s;
    x=s.c_str();
    return in;
}

ostream& operator << (ostream &out, const bing& x)
{
    out<<x.str();
    return out;
}

int main()
{

}