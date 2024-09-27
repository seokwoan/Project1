#pragma once
#ifndef AUTODRIVNG
#define AUTODRIVNG

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct {
	int x_pos; // x축 좌표
	int y_pos; // y축 좌표
	int speed; // 속도
	char direction; // 방향 - N, S, W, E
}carStatus;

// 전역변수
carStatus* record[20]; // 포인터 배열 
int cnt;

void init(carStatus*); // 차 초기화
void print_status(carStatus*); // 상태 출력
void move_car(carStatus*, int, int); // 차 이동
int sensor_left();
int sensor_right();
void record_drive(carStatus*); // 운행 기록

#endif