
#include <stdio.h>

int main()
{
    int data,n,i,j;
    int found=0;
   
    printf("enter the count:");
    scanf("%d",&n);
    
     int arr[n];
    
    printf("enter the elemnts:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the elemnt to be searched:");
    scanf("%d",&data);
    
    for(i=0;i<n;i++)
    {
         
             if(arr[i]==data)
             {
                 
                 found=1;
                 break;
             }
             
         
    
    }
    
    if(found==1){
        printf("\nelement found at %d position",i);
    }
    else
             {
                 printf("\nelement not found");
             }

    return 0;
}
