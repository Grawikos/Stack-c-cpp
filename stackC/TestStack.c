#include <stdbool.h>
#include <stdio.h>
#include "Stack.h"


int main(int argc, char const *argv[]) {
	Stack firstS, secondS, thirdS;

	init(&firstS);
	init(&secondS);
	init(&thirdS);
	destroy(&thirdS);
	printf("isEmpty firstS: %d\n", isEmpty(&firstS));

	for (int i = 1; i <= 1000; i++) {
		push(&firstS, i);
	}


	printf("(pushed)\nisEmpty firstS: %d\n", isEmpty(&firstS));
	printf("isEmpty secondS: %d\n", isEmpty(&secondS));
	printf("popped firstS:  ");
	while (!isEmpty(&firstS)) {
		printf("%d ", pop(&firstS));
	}

	printf("popped secondS:\n");
	while (!isEmpty(&secondS)) {
		printf("%d  ", pop(&secondS));
	}

	destroy(&firstS);
	destroy(&secondS);
	return 0;
}
