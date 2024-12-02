
#include <stdio.h>

int main()
{
    int i,temp,j,n,min;
    int arr[50];
    printf("enter the count:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        
            
        }
        if(min!=i)
            {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
            }
    }
    printf("sorted elements");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}