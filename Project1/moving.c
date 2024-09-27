#include "autoDriving.h"

void move_car(carStatus* car, int left_speed, int right_speed ) {

	char dir[4] = { 'N' , 'E' , 'S' , 'W' };

	int value = left_speed - right_speed;
	value = value > 0 ? 1 : value < 0 ? -1 : 0;
	car->direction += value;
	if (car->direction == -1) car->direction = 3;
	if (car->direction == 4) car->direction = 0;

	car->speed = (left_speed + right_speed) / 2;

	switch (dir[car->direction]) {
		case 'E' : car->x_pos += car->speed ;
			break;

		case 'W' : car->x_pos -= car->speed;
			break;

		case 'N' : car->y_pos += car->speed;
			break;

		case 'S' : car->y_pos -= car->speed;

	}

}

void record_drive(carStatus* car) {

	carStatus* data = (carStatus*)malloc(sizeof(carStatus));

	data->direction = car->direction;
	data->speed = car->speed;
	data->x_pos = car->x_pos;
	data->y_pos = car->y_pos;

	record[cnt++] = data;
	

	// 현재 운행중인 차량의 상태를 carStatus구조체 동적할당 공간에 저장하고 record포인터 배열에 순차적으로 저장
	// while(1)문이 종료(정지)되면 지금까지 운행 내역 출력 
	// record에 저장된 만큼 출력하기

}