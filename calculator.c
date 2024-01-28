/**
 * A simple calculator program that takes two float values as input, prompts the user to select an arithmetic operator, and outputs the result of the operation on the two floats.
 *
 * Validates input values and operators before performing calculations. Exits with error on invalid input.
 *
 * Provides functions for:
 * - Validating float input
 * - Validating operator input
 * - Performing arithmetic operations on the input floats
 */

#include <stdio.h>
#include <stdlib.h>


// take a float and check if the float is valid
float valCheck(float a)
{
    int temp;
    temp = scanf(" %f", &a);
    if (temp != 1)
    {
        printf("Invalid Value \nquiting program...\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        return a;
    }
}


// take an operator and check if the operator is valid
char function()
{
    char operator;
    printf("Enter the operator (+,-,*,/,%%):\t ");
    scanf(" %c", &operator);

    if (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/' && operator!= '%')
    {
        printf("Invalid Operator \nquiting program...\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        return operator;
    }
}


int main()
{
    float firstValue;
    float secValue;

    printf("Enter 1st no.\n");
    firstValue = valCheck(firstValue);

    printf("Enter 2nd no.\n");
    secValue = valCheck(secValue);

    // Perform calculation based on operator
    switch (function())
    {
    case '+':
        printf("Your final answer is : %f\n", firstValue + secValue);
        break;
    case '-':
        printf("Your final answer is : %f \n", firstValue - secValue);
        break;
    case '*':
        printf("Your final answer is : %f \n", firstValue * secValue);
        break;
    case '/':
        if (secValue == 0)
        {
            printf("Divide by 'zero' is UNDIFINED.\nquiting program...\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("Your final answer is : %f \n", firstValue / secValue);
            break;
        }
    case '%':
        int modIntA = (int)firstValue;
        int modIntB = (int)secValue;
        if (secValue == 0)
        {
            printf("Module by 'zero' is UNDIFINED.\nquiting program...\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("Your final answer is : %d \n", modIntA % modIntB);
            break;
        }
    }
    return 0;
}
