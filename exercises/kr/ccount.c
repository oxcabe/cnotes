#include <stdio.h>

int main(void) {
	double counter;

	for (counter = 0; getchar () != EOF; ++counter)
		;

	printf ("chars: %.0f\n", counter);

}
