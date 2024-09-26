#include <stdio.h>
#include <stdlib.h>

void main(){

	int* std1 = (int*)malloc(12);
	std1[0] = 90;
	std1[1] = 88;
	std1[2] = 76;

	int* std2 = (int*)malloc(12);
	std2[0] = 79;
	std2[1] = 57;
	std2[2] = 90;

	int** parr = (int**)malloc(12 * sizeof(int*)); // 포인터배열 공간 12개
	parr[0] = std1;
	parr[1] = std2;
	parr[2] = (int*)malloc(12);
	parr[3] = (int*)malloc(12);

	printf("%d\n", parr[0][1]); // 첫번째 학생의 88점 출력

	// 여러명의 이름을 저장하기 위한 동적할당
	//char* name = (char*)malloc(10);
	char** name = (char**)malloc(sizeof(char*));
	int cnt = 1;
	while (1) {
		name[cnt - 1] = (char*)malloc(10);
		printf("이름 : ");
		gets_s(name[cnt - 1], 10);
		cnt++;
		name = (char**)realloc(name, cnt * sizeof(char*));
		// 변수명 = realloc( 변수명 , 할당받을 메모리 크기 ) -> realloc에 크기를 바꿔 할당받은 주소를 저장할 변수명을 입력해야한다.
	}

	/*int num = 10;
	short s = 20;
	double d = 3.14;

	int arr[20];*/

	//int size;
	//printf("데이터 몇개 : ");
	//scanf_s("%d", &size);
	//int *p = (int*)malloc( size * sizeof(int) );
	//// malloc의 원형 void* malloc( size_t _Size ); void* -> 메모리주소를 반환, Size -> 할당받을 메모리 크기
	//// int *p로 받아줄때 데이터타입을 일치시켜 사용의 편의를 높이기위해 강제 형변환을 해줌 
	//// int타입으로 형변환이 되어 int의 배열처럼 사용할 수 있다
	//p[0] = 10;
	//p[1] = 20;
	//p[2] = 30;
	//p[3] = 40;
	//p[4] = 50; // 20바이트의 메모리영역을 할당 받았으므로 4바이트인 int가 5개가 저장된다
	//printf("%d\n", p[2]);


	//int* pc = (int*) calloc( 4 , sizeof(int) );
	//// calloc의 원형 void *calloc( size_t _Count , size )-> 개수 , 데이터타입의 크기
	//pc[0] = 100;
	//pc[1] = 200;
	//pc[2] = 22;
	//pc[3] = 500;;
	//printf("%d %d %d\n", pc[0] , pc[1] , pc[2] );

	//p = ralloc(p, 16);
	



}

// heap영역 동적 할당을 위해 사용하는 4가지 함수
// ( malloc, calloc, realloc ) -> 할당 ,  free -> 해체(반납)