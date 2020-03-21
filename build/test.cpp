#include<iostream>
#include<string.h>
#include<stdio.h>
#include<sstream>//stringstream

using namespace std;

int main()
{
   stringstream ss;
   string s="1234";
   int x;
   ss.clear();
   ss<<s;
   ss>>x;
   cout<<x<<endl;
   
}