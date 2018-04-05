#include <stdio.h>

/*
  print Fahr/Cels table
  for farh = 0, 20, 40...300
*/
main() 
{
	printf("Fahr/Celsius Conversions\n");
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0 / 9.0 * (fahr - 32.0);
		printf("%3.0f°F %6.1f°C\n", fahr, celsius);
		fahr += step;
	}	
}
