#include "main.h"
/**
 * binary_to_uint - converts binary to base 10
 * Description - takes an array of binary numbers
 * and returns the base 10 number
 * @b: the binary string
 * Return: the resulting base 10 number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int count = 0, power, pow_count, pos = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		power = 1;
		if (b[count] == '1')
		{
			for (pow_count = pos; pow_count > 0; pow_count--)
				power *= 2;
		}
		res += (power * ((b[count]) - '0'));
		count--;
		pos++;
	}
	return (res);
}
