#include <stdio.h>

/* print Fahrenheit-Celcus table
    for fahr = 0, 20, ..., 300; floating-point version  */
int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;	    /* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	    /* step size */

	fahr = lower;
	printf("Fahrenheit Celcius\n"); /* add heading above the table*/
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f %7.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}