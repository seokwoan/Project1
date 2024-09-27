#include "autoDriving.h"

void init(carStatus* car) {
	car->x_pos = 0;
	car->y_pos = 0;
	car->speed = 0;
	car->direction = 0;
}

void print_status(carStatus* car) {
	char dir[4] = { 'N' , 'E' , 'S' , 'W' };
	printf("위치 : (%d , %d)\n", car->x_pos, car->y_pos);
	printf("속도 : %d\n", car->speed);
	printf("방향 : %c\n", dir[car->direction]);
}

// 가상의 센서 함수 ( 0: 흰색 선, 1: 검정색 선 )
int sensor_left() {
	return rand() % 2;
}

int sensor_right() {
	return rand() % 2;
}
