#include "autoDriving.h"

void init(carStatus* car) {
	car->x_pos = 0;
	car->y_pos = 0;
	car->speed = 0;
	car->direction = 0;
}

void print_status(carStatus* car) {
	char dir[4] = { 'N' , 'E' , 'S' , 'W' };
	printf("��ġ : (%d , %d)\n", car->x_pos, car->y_pos);
	printf("�ӵ� : %d\n", car->speed);
	printf("���� : %c\n", dir[car->direction]);
}

// ������ ���� �Լ� ( 0: ��� ��, 1: ������ �� )
int sensor_left() {
	return rand() % 2;
}

int sensor_right() {
	return rand() % 2;
}
