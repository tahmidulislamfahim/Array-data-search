#include<stdio.h>
int linear_search(int arr[],int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
            return i;

    }
    return -1;
}
int main()
{
    int arr[]={2,10,5,4,7,8};
    int item=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=linear_search(arr,size,item);
    if(index!=-1)
        printf("fount at index: %d",index);
    else
         printf("not found");
}
