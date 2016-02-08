#include <stdio.h>

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

		printf("\t%d\t\t%d\n",farenheit,celsius);
	}


}
