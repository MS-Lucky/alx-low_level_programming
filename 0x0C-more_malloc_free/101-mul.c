#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * mul - multiplies two numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: pointer to the result, or NULL on failure
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int i, j, k;
	char *res;

	res = calloc(len1 + len2 + 1, sizeof(char));
	if (!res)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
		{
			free(res);
			return (NULL);
		}
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!_isdigit(num2[j]))
			{
				free(res);
				return (NULL);
			}
			k = i + j + 1;
			res[k] += (num1[i] - '0') * (num2[j] - '0');
			res[k - 1] += res[k] / 10;
			res[k] %= 10;
		}
	}

	while (*res == '0' && *(res + 1))
		res++;

	return (res);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	res = mul(argv[1], argv[2]);
	if (!res)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", res);

	free(res);

	return (0);
}

