// Power Of Number using the while loop;

#include <stdio.h>

int main()
{

    int base, exp, result = 1;
    printf("Enter the base:");
    scanf("%d", &base); // take user inpur (example. 4)
    printf("Enter a Exponent:");
    scanf("%d", &exp); // take user input (ex. 3)

    while (exp != 0)  // condition for terminated loop
    {                 

        result = result * base;
        exp--;
    }
    printf("result: %d", result); // 64

    return 0;
}