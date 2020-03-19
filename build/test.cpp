#include<iostream>

using namespace std;

int main()
{
    char name[10];
    int a;
    //cin>>a;//这样会把换行符留在队列中
    (cin>>a).get();
    cin.get(name,10);
    cout<<a<<"  "<<name<<endl;
    return 0; 
}