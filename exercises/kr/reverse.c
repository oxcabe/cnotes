#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[], int len);
int get_line(char s[], int len);
void copy(char to[], char from[]);

void reverse(char s[], int len) {
	int i;
	char aux[MAXLINE];

	copy (aux, s);
	for (i = 1; i <= len; ++i) {
		s[i - 1] = aux[len - i];
	}
}

int get_line(char s[], int len) {
	int c, i;

	for (i = 0; i < len - 1 && (c = getchar ()) != EOF && c != '\n'; ++i) {
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

	while ((to[i] = from [i]) != '\0')
	  ++i;
}

int main() {
	int len;
	char line[MAXLINE];

	while ((len = get_line (line, MAXLINE)) > 0) {
		reverse (line, len);
		printf ("%s\n", line);
	}

	return 0;
}
