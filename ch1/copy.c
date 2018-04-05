#include <stdio.h>

main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		printf("\n%d ", c);
		putchar(c);
		c = getchar();
	}
	printf("\"%d\"\n", c != EOF);
}
