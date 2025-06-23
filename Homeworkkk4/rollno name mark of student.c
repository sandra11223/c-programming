/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int rollNo, physics, chemistry, compApp, total;
    float percentage;
    char name[50];
    printf("Roll Number of the student : ");
    scanf("%d", &rollNo);

    printf("Name of the Student : ");
    scanf(" %s",name); 

    printf(" marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d", &physics, &chemistry, &compApp);
    total = physics + chemistry + compApp;
    percentage = (total / 300.0f) * 100;
    printf("\nRoll No : %d\n", rollNo);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", physics);
    printf("Marks in Chemistry : %d\n", chemistry);
    printf("Marks in Computer Application : %d\n", compApp);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.1f\n", percentage);
    if (percentage >= 60)
        printf("Division = First\n");
    else if (percentage >= 50)
        printf("Division = Second\n");
    else if (percentage >= 40)
        printf("Division = Third\n");
    else
        printf("Division = first\n");

    return 0;

}
