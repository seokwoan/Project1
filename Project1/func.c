#include "struct_file.h"

void print(led* rgb) {
	printf("ги╧Ьхё %d\n", rgb->pinNum);
	printf("дц╥╞ : %s\n", rgb->color);

}

void init(led* rgb) {
	rgb->pinNum = 10;
	rgb->onoff = 0;
	strcpy_s(rgb->color, sizeof(rgb->color), "╩║╟╜");
}

void power(led* rgb) {

	rgb->onoff = 1 - rgb->onoff;
	printf("%s\n", rgb->onoff ? "дяаЭ" : "╡╗аЭ");

}