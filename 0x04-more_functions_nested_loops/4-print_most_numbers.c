/**
 * print_numbers - prints the numbers, from 0 to 9
 */

void print_numbers(void)

{
	int i = 0;

	while (i < 10)

	{
		if (i != 2 && i != 4)

		{

		_putchar(i);

		}

		i++;
	}
	_putchar('\n');

}
