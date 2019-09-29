#include <stdio.h>

int main(void) {
	int c, count;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++count;
		}
	}
	printf ("count: %d\n", count);
}
