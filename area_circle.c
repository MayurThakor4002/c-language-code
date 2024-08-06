#include <stdio.h>

int main()
{

    int r;  // declare int type variable
    float area; // float type variable
    
    printf("Enter the radius:"); 
    scanf("%d", &r); // here, take r value;
    
    area = 3.14*r*r;  // logic of area of circle
    
    printf("area of circle: %f", area);

    return 0;
}    
