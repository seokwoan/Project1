#include <stdio.h>
#include <string.h>

#include "struct_file.h"

void print(led* rgb) {
	printf("ÇÉ¹øÈ£ %d\n", rgb->pinNum);
	printf("ÄÃ·¯ : %s\n", rgb->color);
		
}

void init(led* rgb) {
	rgb->pinNum = 10;
	rgb->onoff = 0;
	strcpy_s( rgb->color , sizeof(rgb->color), "»¡°­" );
}