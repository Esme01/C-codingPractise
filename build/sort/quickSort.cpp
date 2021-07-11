#include<iostream>
#include<stdio.h>
using namespace std;

int partition(int a[],int first,int end)
{
    int i=first,j=end;
    while (i<j)
    {
        /* code */
        while (i<j&&a[i]<=a[j])
            j--;
        //由于a[i]>a[j],退出前面的循环，则交换，并调整i
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
        while (i<j&&a[i]<=a[j])
            i++;
        if (i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j--;
        }  
    }
    cout<<i<<endl;
    return i;
}

void quickSort(int r[],int first,int end)
{
    if(first<end){//递归函数的出口
        int pos=partition(r,first,end);//一次划分
        quickSort(r,first,pos-1);//对前一个子序列进行快速排序
        quickSort(r,pos+1,end);//对后一个子序列进行快速排序
    }
}

int main()
{
    int array[8]={12,43,0,14,2,3,5,10};
    quickSort(array,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}