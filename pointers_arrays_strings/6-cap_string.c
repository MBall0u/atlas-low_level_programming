#include "main.h"
/**
* cap_string - captitalize the first letter of each word after a seperator
* Description - iterates through a provided string, checks to see if the
* the first letter is lowercase if so it makes it uppercase
* @string: the inputted string
* Return: Always 0 (success)
*/
char *cap_string(char *string)
{
	char *temp = string;

	while (*temp != '\0')
	{
		if (*temp >= 'A' && *temp <= 'Z')
		{
			temp++;
		}

		else if (*temp == ' ' || *temp == '\t' || *temp == '\n' || *temp == ',')
		{
			temp++;

			if (*temp >= 'A' && *temp <= 'Z')
			{
				temp++;
			}

			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		}

		else if (*temp == ';' || *temp == '.' || *temp == '!' || *temp == '?')
		{
			temp++;

			if (*temp >= 'A' && *temp <= 'Z')
			{
				temp++;
			}

			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		}

		else if (*temp == '"' || *temp == '{' || *temp == '}')
		{
			temp++;

			if (*temp >= 'A' && *temp <= 'Z')
			{
				temp++;
			}

			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		}

		else if (*temp == '(' || *temp == ')')
		{
			temp++;

			if (*temp >= 'A' && *temp <= 'Z')
			{
				temp++;
			}

			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		}
	}

	return (string);
}
