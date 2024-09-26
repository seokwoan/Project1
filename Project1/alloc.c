#include <stdio.h>
#include <stdlib.h>

void main(){

	int num = 10;
	short s = 20;
	double d = 3.14;

	int arr[20];

	int *p = (int*)malloc(20);
	// malloc의 원형 void* malloc( size_t _Size ); void* -> 메모리주소를 반환, Size -> 할당받을 메모리 크기
	// int *p로 받아줄때 데이터타입을 일치시켜 사용의 편의를 높이기위해 강제 형변환을 해줌 
	// int타입으로 형변환이 되어 int의 배열처럼 사용할 수 있다
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50; // 20바이트의 메모리영역을 할당 받았으므로 4바이트인 int가 5개가 저장된다
	printf("%d\n", p[2]);
}

// heap영역 동적 할당을 위해 사용하는 4가지 함수
// ( malloc, calloc, realloc ) -> 할당 ,  free -> 해체(반납)