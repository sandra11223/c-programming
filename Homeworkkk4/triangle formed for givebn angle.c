/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum,angle1,angle2,angle3;
    printf("enter the first angle");
    scanf("%d",&angle1);
    printf("enter the second angle");
    scanf("%d",&angle2);
    printf("enter the third angle");
    scanf("%d",&angle3);
    sum=angle1+angle2+angle3;
    if (sum == 180 ||angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("A triangle can be formed with these angles.\n");
    } else {
        printf("A triangle cannot be formed with these angles.\n");
    }


    
    
}
