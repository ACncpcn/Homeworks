
#include <stdio.h>
/*The following program converts Farenheit to celsuis
in 10 degree increments and then displays them*/

int main()
{
	int celsius, farenheit;

	celsius = 0;
	farenheit = 0;

	printf("Farenheit\tCelsius\n");
	printf("=========\t=======\n");

	for (farenheit=0; farenheit<=300; farenheit=farenheit+10)
	{
		celsius = (farenheit-32)*5/9;

		printf("%9d%14d\n",farenheit,celsius);
	}


}
