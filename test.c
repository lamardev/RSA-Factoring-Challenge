#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv[])
{
	char line[1024];
	int i=2;
	long long int number = 0;

	if( argc!=2 )
	{
		fprintf(stderr, "File not included\n");
		return(EXIT_FAILURE);
	}

	char *filename = argv[1];

	FILE *file = fopen(filename, "r");

	while(fgets(line, 1024, file) != NULL)
	{
		size_t len = strlen(line);
		if (len > 0 && line[len - 1] == '\n') {
			line[len - 1] = '\0';
		}

		char *endptr;
		number = strtoll(line, &endptr, 10);
		// Check for conversion errors
		if (*endptr != '\0' && *endptr != '\n')
		{
			fprintf(stderr, "Error converting string to long long int: %s\n", line);
				continue;  // Skip to the next iteration
		}

		while( (number % i != 0) && (i < number) )
		{
			i++;
		}
		printf("Atol of %lld size: %ld\n", number, len);
	}

	return(0);
}
