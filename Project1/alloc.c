#include <stdio.h>
#include <stdlib.h>

void main(){

	int num = 10;
	short s = 20;
	double d = 3.14;

	int arr[20];

	int *p = (int*)malloc(20);
	// malloc�� ���� void* malloc( size_t _Size ); void* -> �޸��ּҸ� ��ȯ, Size -> �Ҵ���� �޸� ũ��
	// int *p�� �޾��ٶ� ������Ÿ���� ��ġ���� ����� ���Ǹ� ���̱����� ���� ����ȯ�� ���� 
	// intŸ������ ����ȯ�� �Ǿ� int�� �迭ó�� ����� �� �ִ�
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50; // 20����Ʈ�� �޸𸮿����� �Ҵ� �޾����Ƿ� 4����Ʈ�� int�� 5���� ����ȴ�
	printf("%d\n", p[2]);
}

// heap���� ���� �Ҵ��� ���� ����ϴ� 4���� �Լ�
// ( malloc, calloc, realloc ) -> �Ҵ� ,  free -> ��ü(�ݳ�)