/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int digit;
    printf("enter the digit:");
    scanf("%d",&digit);
    switch(digit)
    {
        case 0:
          printf("zero:\n");
          break;
        case 1:
          printf("one:\n");
          break;
        case 2:
          printf("two:\n");
          break;
        case 3:
          printf("three:\n");
          break;
        case 4:
          printf("four:\n");
          break;
        case 5:
          printf("five:\n");
          break;
        case 6:
          printf("six:\n");
          break;
        case 7:
          printf("seven:\n");
          break;
        case 8:
          printf("eight:\n");
          break;
        case 9:
          printf("nine:\n");
          break;
         default:
           printf("invalid input!enter a digit between 0 and 9:\n");
    }
    return 0;
}
        
          
          
          
