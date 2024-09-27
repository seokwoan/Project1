#include "autoDriving.h"

void init(carStatus* car) {
	car->x_pos = 0;
	car->y_pos = 0;
	car->speed = 0;
	car->direction = 'N';
}

void print_status(carStatus* car) {
	printf("위치 : (%d , %d)\n", car->x_pos, car->y_pos);
	printf("속도 : %d\n", car->speed);
	printf("방향 : %c\n", car->direction);
}