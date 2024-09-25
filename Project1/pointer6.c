#include <stdio.h>

typedef (*func)(int, int);

void sum(int a, int b) {
	printf("�� ���� �� : %d\n", a + b);
}

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int times(int a, int b) {
	return a * b;
}

void calculation( func fc , int num1, int num2) {
	int result = fc( num1 , num2 );
	printf("����� : %d\n", result);
}


void main() {

	//sum(10, 20);

	//printf("sum�� �ּ� -> %p\n", sum);
	// �Լ� ������
	//void (*psum)(int, int);
	//psum = sum;
	// �Լ� �����Ϳ� �Լ��� �����ϴ� ���
	// �Լ���ȯŸ�� (*�����̸�)(�Ű�����Ÿ��); -> �Լ������� ����
	// �����̸� = �Լ��̸�; -> �Լ������Ϳ� �Լ��޸��ּҸ� �־���( ���ǽ� �־�� )

	//psum(40, 50);

	calculation( plus, 10, 20 );
	calculation( minus, 50, 30 );
	calculation( times, 6, 7 );


}

// �Լ� ������ : �Լ��� �̸��� �ּ��̴�.