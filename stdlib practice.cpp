/* system example : DIR*/
#include<stdio.h>
#include<stdlib.h> //system, NULL, EXIT_FAILURE
int main() {
	int i;
	printf("Checking if processor is available...\n");
	if(system(NULL)) puts ("OK\n");
	else exit(EXIT_FAILURE);
	printf("Executing command DIR...\n");
	i=system("dir");
	printf("The value return was : %d.\n", i);
	return 0;
}
