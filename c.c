#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* numberString = "1718944270642558716715";
	        
	        unsigned long long int convertedNumber = strtoull(numberString, NULL, 10);
		    
		    printf("The converted number is: %ullld\n", convertedNumber);
		        
		        return 0;
}
