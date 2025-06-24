/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100]={10,20,30,40,50};
    int n=5,num,middle;
    int left=0,right=n-1;
    printf("enter the element to be search:");
    scanf("%d",&num);
    while(left<=right)
    {
        middle=(left+right)/2;
        if(arr[middle]==num)
        {
            printf("the element is found at the position %d",middle);
            break;
        }
    else if(arr[middle]>num)
    {
     right=middle-1;
    }
    else{
     left=middle+1;
    }
    if(left>right)
    {
        printf("the element is not found in the list:");
    }
    }
   return 0;
}

     
        

    