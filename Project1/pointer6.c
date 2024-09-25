#include <stdio.h>

typedef (*func)(int, int);

void sum(int a, int b) {
	printf("두 정수 합 : %d\n", a + b);
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
	printf("결과값 : %d\n", result);
}


void main() {

	//sum(10, 20);

	//printf("sum의 주소 -> %p\n", sum);
	// 함수 포인터
	//void (*psum)(int, int);
	//psum = sum;
	// 함수 포인터에 함수를 저장하는 방법
	// 함수반환타입 (*변수이름)(매개변수타입); -> 함수포인터 정의
	// 변수이름 = 함수이름; -> 함수포인터에 함수메모리주소를 넣어줌( 정의시 넣어도됨 )

	//psum(40, 50);

	calculation( plus, 10, 20 );
	calculation( minus, 50, 30 );
	calculation( times, 6, 7 );


}

// 함수 포인터 : 함수의 이름은 주소이다.