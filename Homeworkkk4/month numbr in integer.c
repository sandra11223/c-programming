/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
           printf("this month has 30 days.\n");
           break;
        case 2:
           printf("this month has 28 days(29 days in leap year).\n");
         default:
         printf("invalid month number!enter the number between 1 nd 12.\n");
}
    return 0;
}
