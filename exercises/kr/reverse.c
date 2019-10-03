#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[]) {
	int i, len;
	char aux[MAXLINE];

	copy (aux, s);
	len = getline (aux, MAXLINE);
	for (i = 0; i < len; ++i) {
		s[i] = aux[len - i];
	}

}

int getline(char s[], int len) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar ()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;

	while ((to[i] = from [i] != '\0')
	  ++i;
}

int main() {
	char line[MAXLINE];

	while (getline (line, MAXLINE) > 0)
		printf ("%s", reverse (line));

	return 0;
}
