#include <stdio.h>

main()
{
	int c, lc, wc;
	lc = ' ';
	wc = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
			case '\t':
			case '\n':
				if (lc != ' ' && lc != '\t' && lc != '\n')
					wc++;
				break;
		}
		lc = c;
	}

	printf("Counted %d words!\n", wc);
}


