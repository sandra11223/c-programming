/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[100]={2,3,6,8,7};
   int i,j,n=5,temp,minIndex;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           minIndex=i;
        for(j=1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        if (minIndex!=i)
        {
            temp=arr[i];
            arr[i]=minIndex;
            arr[minIndex]=arr[i];
        }
       }
       printf("sorted array is:");
       for(i=0;i<n;i++)
       {
           printf(" %d",arr[i]);
       }
   }
       }
        