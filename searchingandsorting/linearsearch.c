#include<stdio.h>
#define max 7

int linearsearch(int arr[],int value,int size)
{
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[max]={12,53,5,76,89,9,78};
    int index=linearsearch(arr,12,max);
    printf("%d",index);
    return 0;
}