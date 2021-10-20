#include <stdio.h>
int main() {

	int min, h, m;
	printf("How many minutes?: "); /* will ask user to input the minutes */
	scanf("%d", &min); /* minutes as integer */
	
	h = min/60; /* calculate hours */
	
	m = (min - (60*h)); /* calculate minutes */
	
	printf("%d hour, %d min\n",h,m); /* print the hours and minutes */
	

	
	return 0;
}
