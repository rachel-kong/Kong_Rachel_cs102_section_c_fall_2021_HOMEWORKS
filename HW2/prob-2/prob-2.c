#include <stdio.h>
int main() {

	int min, h, m;
	printf("How many minutes?: ");
	scanf("%d", &min);
	
	h = min/60; 
	
	m = (min - (60*h));
	
	printf("%d hour, %d min\n",h,m);
	

	
	return 0;
}
