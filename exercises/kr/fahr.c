#include <stdio.h>

#define	LOWER	0		// Lower limit of table
#define	UPPER	300		// Upper limit
#define	STEP	20		// Step size

/* print Fahrenheit-Celsius table */
int main() {
	for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf ("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
	}
}
