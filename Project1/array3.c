#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define arr_size 10 // define으로 상수를 정의할때는 타입상관없이 저장 가능하다

void main() {

	srand(time(NULL));
	int arr[arr_size];

	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10 + 1; // rand 함수는 정수의 값이 나옴 큰 숫자가 나와 나누기를 통해 원하는 값을 가져온다
		// c언어의 rand는 시간을 통해 값을 생성 -> 컴파일시 생성된 랜덤값을 계속 사용 -> srand(time(null)) 을 통해 현재시간을 넣어줘 실행마다 
		// 랜덤 값을 바꿔줌
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d\n", arr[i]);
	}

	// 랜덤값( 5 ~ 17 )
	// 7, 8, 9 값이 나오면 plus 이다. 출력
	// 10, 11 은 minus이다. 출력
	// 100번을 반복하여 plus이다. 출력할때 마다 배열에 숫자 저장하기
	// 100번 반복 끝나면 배열 전체 출력
	// * 배열의 크기는 100으로 하고 0으로 초기화 하기

	//int num[100];
	//memset(num, 0, sizeof(num));

	//int k = 0; // num배열의 index를 표시해줄 변수
	//for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
	//	int temp = rand() % 13 + 5;
	//	if (temp == 7 || temp == 8 || temp == 9) {
	//		printf("plus 이다.\n");
	//		num[k++] = temp; // k index에 값이 저장되면 k값 증가
	//	}
	//	else if (temp == 10 || temp == 11) {
	//		printf("minus 이다.\n");
	//	}
	//}
	//for (int i = 0; i < k; i++) { // k index전까지 7~9 사이의 값이 저장되어 있음
	//	printf("%d\n", num[i]);
	//}

	// 자바스크립트 다차원 배열
	// var arr = new Array(); 1차원 배열을 만들어주고
	// arr,push( new Array() ); 만들어진 배열에 배열을 넣어줌
	// var arrw = [ [ 1, 2, 3 ] , [ 4, 5, 6 ] ]

	// 자바에서 다차원 배열
	// int[][] arr = new int[3][4];


	// c언어 다차원 배열
	int arr2[3][4];

	arr2[0][0] = 10;
	arr2[0][1] = 20;
	arr2[0][2] = 30;
	arr2[0][3] = 40;
	arr2[1][0] = 50;
	arr2[1][1] = 60;
	arr2[1][2] = 70;
	arr2[1][3] = 80;

	printf("arr2 주소 -> %p\n", arr2);
	printf("arr2+1 주소 -> %p\n", arr2 + 1);

	printf("arr2[1][0] 주소 -> %p\n", arr2[1]);
	printf("&arr2[1][0] 주소 -> %p\n", &arr2[1][0]);
	// &은 주소를 알려주는 참조연산자 참조연산자를 통해 다차원배열의 주소값을 가져올 수 있음

	printf("arr[1][0] -> %d\n", arr2[1][0]);
	printf("*arr2[1] -> %d\n", *arr2[1]); // 해당 주소에 있는 데이터 값을 가져옴
	// *은 주소에 있는 공간을 가져오는 참조연산자 ( 공간에 있는 값을 가져옴 )

	printf("*&arr2[1][0] -> %d\n", *&arr2[1][0]);
	// *& 두 참조연산자가 같이 있다면 서로 상쇄됨
}