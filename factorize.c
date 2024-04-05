#include "factor.h"

/**
 * factorize - This is the function factorize a number
 * @buffer: this is a pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{
	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}

return (0);
}
