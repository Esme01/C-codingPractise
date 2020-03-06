 #include<iostream>
 #include<math.h>

 using namespace std;
 int main()
 {
     int n,res=0;
     cin>>n;
    for(int i=1;n/pow(5,i)>=1;i++)
    {
        res+=n/pow(5,i);
    }
    cout<<res<<endl;
    return 0;
 }