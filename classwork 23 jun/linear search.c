#include <stdio.h>

int main()
{
    int arr[100]={10,20,30,40,50};
    int i,n,num;
    printf("enter the element to be search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("element found at %d index",i);
            break;
        }
    }
    if(i==n)
    {
        printf("given element is not found");
    }
   return 0;
}