#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
