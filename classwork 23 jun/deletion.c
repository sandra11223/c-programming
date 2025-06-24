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
    int n=5,i,pos=2;
    for(i=pos;i<n-1;i++)
    {
      arr[i]=arr[i+1]; 
    }
     n--;
     printf("array deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("  %d",arr[i]);
    }
    return 0;
}
