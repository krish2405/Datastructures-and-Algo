#include<stdio.h>
#define max 10

int binarysearch(int arr[],int value,int size)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==value)
        {
            return mid;

        }
        if(arr[mid]<value)
        {
            low=mid+1;
        }
        if(arr[mid]>value)
        {
            high=mid-1;
        }
        
        return -1;
    }
}
int main()
{
    int arr[max]={3,4,5,6,8,9,34,45,67,190};
    int index=binarysearch(arr,99,max);
    printf("%d",index);
}