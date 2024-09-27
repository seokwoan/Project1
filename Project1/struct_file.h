#pragma once
#ifndef STRUCTFILE
#define STRUCTFILE

// #ifdef : ���� ���ǰ� �Ǿ� �ִٸ�
// #define���� �̸��� �����ϰ� 
// ���ǵ� �̸��� �����Ǿ��ٸ� #ifdef���� #else������ �����ϰ� 
// #define���� �̸��� ���ǵ��� �ʾҴٸ� #else���� #endif���� ���� 

// #ifndef : ���� �������� �Ǿ����� �ʴٸ�
// #define���� �̸��� �����ϰ� ���ǵ� �̸��� ������ ���� �ʾҴٸ� #ifndef ���� #else���� ����
// ���ǵǾ� ������ #else���� #endif���� ����
// ��������� �ѹ��� �����Ͽ� �����Ϸ��� #ifndef�� �����ϴ�.


#include <stdio.h>
#include <string.h>

typedef struct LED {
	int pinNum;
	int onoff;
	char color[10];
}led;

void init(led*); // func.c ���� ���� �Լ�
void print(led*); // func.c ���� ���� �Լ�

void power(led* rgb);

#endif