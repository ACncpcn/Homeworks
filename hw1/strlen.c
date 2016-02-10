/*The following uses a function to display the number of characters
in string str[]*/
 #include <stdio.h>

int stringlength(char string[]);

int main()
{
	char str[] = "The quick brown box";

	printf("The length of the string '%s' is %d\n",
		str, stringlength(str));
}

int stringlength(char string[])
{
	int count;
	count = 0;
	while (string[count]!= '\0')
	{
		count++;
	}

	return count; 
}