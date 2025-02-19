#include <stddef.h>
#include <stdio.h>
#include <sys/mman.h>
#include "../include/malloc.h"

void *malloc(size_t height)
{

	void *ptr = mmap(NULL, height, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_SHARED, -1, 0);
	return ptr;

}
