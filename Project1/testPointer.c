#include <stdio.h>
#include <stdlib.h> // rand함수를 사용하기 위해 필요
#include <time.h> // srand(time(NULL))을 사용하기 위해 필요

void input(int* , int); // 함수 선언 함수를 선언할때는 매개변수의 데이터타입만 넣어도 된다
void print(int* , int); // 함수 선언

void main() {

	srand(time(NULL));

	int numbers[15];

	input(numbers , sizeof(numbers) / sizeof(int) );

	print(numbers , sizeof(numbers) / sizeof(int) );

}

// main 함수에서 1차원 배열 numbers를 생성
// numbers 크기는 15
// input이라는 함수를 통해 numbers배열에 랜덤값 저장하기 랜덤범위(1~50)
// print 함수를 통해 numbers 값 출력하기

void input(int *numArr , int size) { // 함수 정의
	// 배열의 크기를 매개변수로 이용해서 함수를 정의하면 크기가 다른 배열도 적용가능
	for (int i = 0; i < size; i++) {
		numArr[i] = rand() % 50 + 1;
	}

}

void print(int *numArr , int size) {

	for (int i = 0; i < size; i++) {
		printf("%d\n", numArr[i]);
	}
}