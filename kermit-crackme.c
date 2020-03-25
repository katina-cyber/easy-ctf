#include <stdio.h>
#define MAX 16

int main() {
	char buf[MAX];

	printf("Hello there, can you guess my mystical string? ");
	gets(buf);

	if(strcmp(buf, "32YeAr0ldL@dyyyy") == 0) {
		printf("You got it!\n");
		printf("flag{c@n_1_g3t_@_h3ll_y3@h}");
	}
	else {
		printf("Oh man oh man, really not trying to hurt your feelings, but you didn't guess right.");
	}
	return 0;
}
