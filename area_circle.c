#include <stdio.h>

int main()
{

    int r;
    float area;
    printf("Enter the radius:");
    scanf("%d", &r);
    area = 3.14*r*r;
    printf("area of circle: %f", area);

    return 0;
}    