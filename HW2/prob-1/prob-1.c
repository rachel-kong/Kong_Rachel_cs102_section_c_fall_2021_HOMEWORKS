#include <stdio.h>

int main()
{
    float length, width, perimeter; /* variables */

    
    printf("What is the length of the rectangle?: "); /* user inputs length */
    scanf("%f", &length);
    printf("What is the width of the rectangle?: "); /* user inputs width */
    scanf("%f", &width);

    
    perimeter = 2 * (length + width); /* formula for the perimeter of a rectangle */

    
    printf("Perimeter of rectangle = %f units ", perimeter); /* gives value of the perimeter */

    return 0;
}
