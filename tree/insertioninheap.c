#include<stdio.h>
#define MAx 1000


void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int n,int i)
{  int parent=(i-1)/2;
    if(arr[parent]>0)
   { if(arr[parent]<arr[i])
    {
        swap(&arr[parent],&arr[i]);
        heapify(arr,n,parent);

    }
   }

}


void display(int arr[],int n)
{
    for(int  i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}

void insert(int arr[],int n,int data)
{
    n=n+1;
    arr[n-1]=data;
    heapify(arr,n,n-1);
}
int main()
{    int n=5;
    int arr[MAx]={20,11,15,10,8};

    insert(arr,n,16);
        display(arr,n+1);
    return 0;

    

    
}