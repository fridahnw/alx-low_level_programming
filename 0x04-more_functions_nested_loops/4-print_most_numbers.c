/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0 on success
 */

void print_numbers(void)

{
	int i = 0;

	while (i < 10)

	{
		if (i != 2 && i != 4)

		{

		_putchar(i + '0');
		}

		i++;
	}
	_putchar('\n');

	return (0);
}