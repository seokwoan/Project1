#include <stdio.h>
#include <time.h>


extern int result;
// 외부변수 가져오는 방법 extern 데이터타입 변수명; -> 데이터타입과 변수명은 가져오고자 하는 변수와 같아야 한다
extern void sum(int, int);
// 변수뿐 아니라 함수도 가져올 수 있음

int size = 100; // 전역변수 - 함수 바깥에 존재

void test();

int len = 50; // 전역변수
// c언어는 절차지향언어로 test함수 밑에 len변수가 정의되어 test함수에서 len변수를 인식하지 못한다. 순서가 중요
// 전역변수 윗부분에 함수를 선언하고 밑부분에 함수를 정의하면 전역변수 사용가능

void main() {

	//sum(30, 40);

	//printf("외부변수 %d\n", result);

	//// 변수, 배열 선언은 맨위에 

	//int num = 10; // 지역변수
	//printf("%d\n", size);
	//test();
	//test();
	//size = 1500;
	//test(); // a는 지역변수라 함수가 끝나면 사라지고 실행마다 재할당 -> 10으로 계속 초기화
	//		// b는 정적변수라 함수가 끝나도 사라지지 않음 -> b++에의해 호출시마다 증가

	int num = 0, i = 0, k = 0; // 지역변수
	register int reg = 0, reg_i = 0, reg_k = 0; //레지스터 변수

	clock_t time1 = clock(), time2;
	for (i = 0; i < 10000; i++) {
		for (k = 0; k < 10000; k++) {
			num += i;
		}
	}
	printf("지역변수 : %d\n", clock() - time1);

	time2 = clock();
	for (reg_i = 0; reg_i < 10000; reg_i++) {
		for (reg_k = 0; reg_k < 10000; reg_k++) {
			reg += reg_i;
		}
	}
	printf("레지스터변수 : %d\n", clock() - time2);
	
}


void test() {

	int a = 10; // 지역변수
	static int b = 10; // 정적변수 - 최초 한번 할당, 할당되면 다시 코드를 실행하지 않는다. 함수가 끝나도 사라지지 않고 계속 유지
	printf("%d %d %d %d\n", a, b, size, len);
	a++;
	b++;
}


// 지역변수 : 함수 호출시 할당, 함수 종료시 해제
// 정적변수 : 함수 호출시 할당, 프로그램 종료시 해제
// 전역변수 : 프로그램 시작시 할당, 프로그램 종료시 해체
// 외부변수 : 다른곳에 있는 전역변수를 사용할 수 있는 변수 -> 다른c파일 
// 레지스터 변수 : cpu에 변수 할당