#include <stdio.h>
#define MAx 1000

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right =2*i+1;

    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
     if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }

    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}

void delete(int arr[],int n)
{
    int lastelement=arr[n-1];
    arr[0]=lastelement;
    n=n-1;

    heapify(arr,n,0);

}


void display(int arr[],int n)
{
    for(int  i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
int main()
{
    int arr[MAx]={20,19,18,15,13,16,14,9};
    int n=8;
    delete(arr,n);
    display(arr,n-1);
}