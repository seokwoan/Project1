#include <stdio.h>
#include <stdlib.h> // rand�Լ��� ����ϱ� ���� �ʿ�
#include <time.h> // srand(time(NULL))�� ����ϱ� ���� �ʿ�

void input(int* , int); // �Լ� ���� �Լ��� �����Ҷ��� �Ű������� ������Ÿ�Ը� �־ �ȴ�
void print(int* , int); // �Լ� ����

void main() {

	srand(time(NULL));

	int numbers[15];

	input(numbers , sizeof(numbers) / sizeof(int) );

	print(numbers , sizeof(numbers) / sizeof(int) );

}

// main �Լ����� 1���� �迭 numbers�� ����
// numbers ũ��� 15
// input�̶�� �Լ��� ���� numbers�迭�� ������ �����ϱ� ��������(1~50)
// print �Լ��� ���� numbers �� ����ϱ�

void input(int *numArr , int size) { // �Լ� ����
	// �迭�� ũ�⸦ �Ű������� �̿��ؼ� �Լ��� �����ϸ� ũ�Ⱑ �ٸ� �迭�� ���밡��
	for (int i = 0; i < size; i++) {
		numArr[i] = rand() % 50 + 1;
	}

}

void print(int *numArr , int size) {

	for (int i = 0; i < size; i++) {
		printf("%d\n", numArr[i]);
	}
}