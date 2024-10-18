/*write a program to design a menu driven calculator using swotch and goto
Name: Ishaan Rajani
UIN: 241p008
exp: 3*/
#include <stdio.h>
int main()
{


    float n1,n2,result;
    int ans;
    char op, chk;

    repeat:

     printf("Please enter your first input\n");
    scanf("%f", &n1);

      printf("Please enter your second input\n");
    scanf("%f", &n2);

    printf("Enter the number of your choice \n +: Addition \n -: Subtraction \n %%: Modulus \n *: Multiplication \n /: Division \n \n");
    scanf(" %c", &op);

    switch(op)
    {

    case '+':
        result = n1 + n2;
        printf("%.1f + %.1f = %.1f", n1,n2,result);
        break;

    case '-':
        result = n1 - n2;
        printf("%.1f - %.1f = %.1f", n1,n2,result);
        break;

    case '*':
        result = n1 * n2;
        printf("%.1f * %.1f = %.1f", n1,n2,result);
        break;

    case '%':
        result = (int)n1 & (int)n2;
        printf("%.0f % %.0f = %.0f", n1,n2,result);
        break;

    case '/':
        result = n1 / n2;
        printf("%.1f / %.1f = %.1f", n1,n2,result);
        break;

    default:
        printf("invalid operation");
        break;
    }

    printf("\n \t Do you want to continue?  (Y/N) : \n \t");
    scanf(" %c", &chk);
    if(chk == 'y' || chk == 'Y')
    goto repeat;
    return 0;
}
