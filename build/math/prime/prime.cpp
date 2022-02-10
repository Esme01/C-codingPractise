 //1.11review
 #include<iostream>
 #include<cstdio>
 using namespace std;
 bool prime(int a)
 {
     for (int i = 2; i <= a/i; i++) // i*i有可能越界
     {
         if (a%i==0)
         {
            return false;
         }
     }
     return true;
 }


 int main()
 {
     int s=0;
     int flag=0;
     while (scanf("%d",&s)!=EOF)
     {
         flag=0;//每次输入之后都要更新flag的值
         if (s<2)
         // 1不是素数，2 是素数
         {
             cout<<-1<<endl;
             return 0;
         }
         for (int i = 2; i < s; i++)
         {
             if (prime(i)==true&&i%10==1)
             {
                 flag=1;
                 cout<<i<<" ";
             }
         }
         if (flag==0)
         {
             cout<<-1;
         }
         cout<<endl;
     }
     
     return 0;
 }