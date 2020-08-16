#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i;
	float x = 0, y = 0, z = 0, average, sd;
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		for (i = a; i <= b; i++) {
			printf("%d ", i);
			x++;
			y += i;
			z += i * i;
		}
	}
	else if (a > b) {
		for (i = a; i >= b; i--) {
			printf("%d ", i);
			x++;
			y += i;
			z += i * i;
		}
	}
	else if (a == b) {
		printf("Average = %d\n", a);
		printf("SD = 0.00");
		return 0;
	}
	average = y / x;
	sd = sqrt(((x * z) - (y * y)) / (x * (x - 1)));
	printf("\nAverage = %.1f", average);
	printf("\nSD = %.2f", sd);
	return 0;
}