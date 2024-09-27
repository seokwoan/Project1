#pragma once
#ifndef AUTODRIVNG
#define AUTODRIVNG

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x_pos; // x축 좌표
	int y_pos; // y축 좌표
	int speed; // 속도
	char direction; // 방향 - N, S, W, E
}carStatus;

void init(carStatus*); // 차 초기화
void print_status(carStatus*); // 상태 출력

#endif