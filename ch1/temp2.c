#include <stdio.h>

main()
{
	float fahr, celsius;
	int start, end, step;
	
	start = -20;
	end = 150;
	step = 10;

	celsius = start;

	while (celsius <= end) {
		fahr = celsius * 9 / 5 + 32;
		printf("%3.0f°C%6.0f°F\n", celsius, fahr);
		celsius += step;
	}	
}
