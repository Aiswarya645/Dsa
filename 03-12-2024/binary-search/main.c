#include <stdio.h>

int main()
{
    int n,data,i,start,end,mid;
    printf("enter the count:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements search to be:");
    scanf("%d",&data);
    start=0;
    end=n-1;
   
    while(start<=end)
    {
         mid=(start+end)/2;
        
       if(arr[mid]==data)
       {
           printf("element found %d at position",mid);
           return 0;
       }
       else if(arr[mid]<data)
       {
           start=mid+1;
       }
       else
           end = mid-1;
    }
    printf("element not found");
    return 0;
}