#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char line[100];
	int i = 2;
	unsigned long long int number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "File not included\n");
		return (EXIT_FAILURE);
	}

	char *filename = argv[1];

	FILE *file = fopen(filename, "r");

	while (fgets(line, 100, file) != NULL)
	{
		number = atoll(line);
		while ((number % i != 0) && (i < number))
		{
			i++;
		}
		printf("%llu=%llu*%d\n", number, number/i, i);
	}
	return (0);
}
