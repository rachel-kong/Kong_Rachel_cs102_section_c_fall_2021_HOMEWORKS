#include <stdio.h>

int main()
{
    float length, width, perimeter;

    
    printf("What is the length of the rectangle?: ");
    scanf("%f", &length);
    printf("What is the width of the rectangle?: ");
    scanf("%f", &width);

    
    perimeter = 2 * (length + width); /* Formula for the perimeter of a rectangle */

    
    printf("Perimeter of rectangle = %f units ", perimeter); /* Gives value of the perimeter */

    return 0;
}
