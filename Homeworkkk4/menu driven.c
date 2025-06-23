/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    double num1,num2,result;
    
    while(1)
    {
        printf("\nsimple calculation menu:\n");
        printf("1.addition:\n");
        printf("2.subtraction:\n");
        printf("3.multipliaction:\n");
        printf("4.division:\n");
        printf("5.exit:\n");
        printf("enter your choice:(1-5)");
        scanf("%d",&choice);
        
        if(choice==5)
        {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            
            switch(choice)
            {
                case 1:
                   result=num1+num2;
                   printf("result:% 21f\n",result);
                   break;
                 case 2:
                    result=num1-num2;
                    printf("result:% 21f\n",result);
                    break;
                 case 3:
                    result=num1*num2;
                    printf("result:% 21f\n",result);
                    break;
                case 4:
                     if(num2!=0)
                     result=num1/num2;
                     
                    else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;
                }
                printf("Result: %.2lf\n", result);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}
}

    