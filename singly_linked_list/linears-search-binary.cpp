#include <iostream>

using namespace std;

int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int size,int element)
{

    int high,mid,low;
    low= 0;
    high=size-1;

   
    while(low<=high)
    {    mid=high+low/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low =mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    return -1;

}
    int main()
{   //unsorted aarray for linear search
   // int array[]={1,7,8,9,90,87,76,34};
    //cout<<"enter the element you want to search"<<endl;
   // cin>>element;
    //int indexno=linearsearch(array,size,element);

   //sorted aarray for binary search
   int array[]={1,7,8,9,90,99,109,190,678,987};
    int size=sizeof(array)/sizeof(int);
    int element=99;
   

    int indexno=binarysearch(array,size,element);//binary searching
    cout<<"the element " <<element<<" is founded on index number "<<indexno;

     return 0;
}
