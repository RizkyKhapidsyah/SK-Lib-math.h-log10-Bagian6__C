// crt_log.c
/* This program uses log and log10
* to calculate the natural logarithm and
* the base-10 logarithm of 9,000.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double x = 9000.0;
	double y;

	y = log(x);
	printf("log( %.2f ) = %f\n", x, y);
	y = log10(x);
	printf("log10( %.2f ) = %f\n", x, y);

	_getch();
	return 0;
}