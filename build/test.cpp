#include<iostream>
#include<string.h>
#include<stdio.h>
#include<sstream>//stringstream

using namespace std;

/*
 * @lc app=leetcode id=696 lang=c
 *
 * [696] Count Binary Substrings
 */

// @lc code=start


int countBinarySubstrings(char * s){
    int l=strlen(s);
    int flag=0,ss=0;
    for (int i = 0; i <l; i++)
    {
        char t=s[i];
        for (int j = i; j < l; j++)
        {
            if (s[j]==t);
                //if (flag!=0)break;
            else 
            {
                flag++;
                if ((j-i)%2==1)ss++;
            }
            if (flag>1)break;            
        }
        flag=0;
    }
    return ss;
    
}