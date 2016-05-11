#include<stdio.h>
void Temperatures(double );

int main(void)

{
	double Fahrenheit;
	printf("please input a Fahrenheit: ");
	while(scanf("%lf", &Fahrenheit) == 1){
	Temperatures(Fahrenheit);
	printf("please intput a other Fahrenheit(q to quit):");
	}
	printf("\nend!");
	return 0;
}

	void Temperatures(double Temperatures)
	{
			const double a=1.8, b = 32.0, c = 273.16;
			printf("Fahrenheit = %.1f\n", Temperatures);
			printf("Celsius = %.1f\n", a * Temperatures + b);
			printf("Kelvin = %.1f\n", a* Temperatures +b +c);

	}