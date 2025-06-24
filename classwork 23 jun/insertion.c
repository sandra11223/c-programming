/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100]={10,20,30,40,50};
    int value,size=5,i,pos;
    // for(i=0;i<size;i++);
    // {
    // scanf("%d",&arr[i]);
    // }
    printf("enter the element to be inserted:");
    scanf("%d",&value);
    printf("enter the position to be inserted:");
    scanf("%d",&pos);
    if(pos<0||pos>size)
    {
        printf("invalid position\n");
        return 1;
    }
    for(i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    size++;
    printf("the array:\n");
    for(i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
}
    
    
    