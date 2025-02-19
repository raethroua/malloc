#include "../include/malloc.h"
#include <stdio.h>

int main()
{

	void *ptr = malloc(4096);
	printf("%p", ptr);
	return 1;

}
