#include <stdio.h>
int main() { 
    int pennies, q, d, n, p;
    printf("Input amount in pennies: "); /* asks user to covert dollars to pennies */
    scanf("%d", &pennies); /* pennies in integer */

    q = pennies/25;  /* calculate quarters */
    d = (pennies - (pennies/25))/10;  /* calculate dimes */
    n = (pennies - (pennies - (pennies/25))/10)/5;  /* calculate nickels */
    p = (pennies - (pennies - (pennies - (pennies/25))/10)/5);  /* calculate pennies */

    printf("%d quarters, %d dimes, %d nickels, %d pennies\n",q,d,n,p); /* will print out the amount of quarters, dimes, nickels, and pennies */

    return 0;
}
