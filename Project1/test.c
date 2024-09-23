#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 코드 -> 컴파일 -> 실행
// 코드는 사람의 언어이므로 컴파일 작업을 통해 컴퓨터언어로 바꿔 실행해줌
// # -> 전처리 컴파일 실행하기 전에 #뒤의 <stdio.h>를 외부 종속성 파일에 넣어줌
// <stdio.h>는 printf가 동작하기 위해 필요함
// std -> standard , io -> input output 으로 기본 입출력에 관한 내용이 있음 stdio.h가 있어야 기본 입출력가능
#include <stdbool.h>



void main() {
	// void 기본 데이터 타입 -> 데이터를 가지지 않는 타입, 자바에서는 데이터 저장 불가능
	// main이 이름인 함수 있어야 시작가능

	char ch = 'b'; // 아스키코드표에 있는 문자만 사용가능
	// c언어에서는 char 타입에 한글이 들어가지 않는다
	// 자바에서의 char는 2바이트, c언어는 1바이트 -> 차이가 있음

	short s = 10; // 10진수 정수
	int i = 10000; // 10진수 정수
	long l = 1000000; // 10진수 정수

	float f = 2.34; // 10진수 실수
	double d = 0.001; // 10진수 실수   

	bool b = false; // 기본타입이 아님 사용하기 위해서는 <stdbool.h> include가 필요
	// 사용가능한 데이터 타입 문자열은 없음

	// 서식문자
	// %d - 10진수 정수
	// %c - 문자
	// %f - 10진수 실수
	// %lf - 10진수 실수( double )
	// %s - 문자열
	// %p - 포인터값


	// 입력하는 방법 - scanf
	//int num1 , num2;
	//scanf_s("%d", &num);
	// scanf( "서식문자" , &변수명 ); -> &변수명은 변수의 주소를 알려줌 - &는 참조연산자로 주소를 알려줌
	// scanf는 c언어의 보안경고가 나와 #define _CRT_SECURE_NO_WARNINGS을 해줘야함
	// scanf_s를 사용하면 보안이 적용되서 #define을 할 필요가 없음
	// scanf는 모든 타입 입력 가능 
	// scanf_s는 숫자만 입력 가능, 문자와 문자열을 입력하기 위한 함수를 따로 사용해야함
	//printf("두 정수를 입력하세요");
	//scanf_s("%d", &num1);
	//scanf_s("%d", &num2);
	//scanf_s("%d %d", &num1, &num2);

	//printf("%d %d \n", num1, num2);


	//// 출력하는 방법 - printf
	//printf("%d %c", 10 , 'a');
	//printf("잘 되고 있나?");

	// 국어, 수학, 영어 점수 입력하고 총점과 평균을 구하여 출력

	int kor, mat, eng, total, avg;
	printf("국어 점수를 입력하세요");
	scanf_s("%d", &kor);

	printf("수학 점수를 입력하세요");
	scanf_s("%d", &mat);

	printf("영어 점수를 입력하세요");
	scanf_s("%d", &eng);

	total = kor + mat + eng;
	avg = total / 3;

	printf("총점 : %d 평균 : %d", total, avg);


}