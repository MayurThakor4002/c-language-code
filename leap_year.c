// check the leap year or not
#include <stdio.h>

int main()
{

    int year;
    printf("Enter the year: ");
    scanf("%d", &year); // enter any year if you want

    if (year % 4 == 0)
    {
        printf("%d leap year", year);
    }
    else
    {
        printf("%d is not leap year", year);
    }
    return 0;
}