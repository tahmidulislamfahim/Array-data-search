#include<stdio.h>
int binary_search(int arr[],int low,int high,int item)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==item)
            return mid;
        else if(arr[mid]<item)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={5,10,15,20,25,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int item=10;
    int index=binary_search(arr,0,size-1,item);
    if (index!=-1)
        printf("found at index %d",index);
    else
        printf("not found");
}
