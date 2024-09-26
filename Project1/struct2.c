#include <stdio.h>
#include <string.h> // gets_s를 쓰기위해 필요
#include <stdlib.h> // alloc을 쓰기위해 필요

typedef struct music {
	char singer[20]; // 가수명
	int release; // 발매년도
	float playtime; // 재생시간
}music;

music* input();

void print( music**);


void main() {

	//music* m1 = (music*)malloc(sizeof(music)); // 구조체 변수를 만드는게 아닌 동적할당을 통해 포인터에 저장
	//m1->release = 2019; // 현재 m1은 music 구조체의 변수가 아닌 포인터변수이므로 m1에 접근하려면 .접근연산자가 아닌 ->로 접근해야한다
	//m1->playtime = 4.41;
	//strcpy_s( m1->singer , 20 , "폴킴" );

	music** data = NULL;
	for (int i = 1; i <= 5; i++) {
		if (data == NULL) {
			data = (music**)malloc(sizeof(music));
		}
		else {
			data = (music**)realloc( data , i * sizeof(music));
		}
		data[i-1] = input();
	}

	print(data);

	// 할당 메모리 해제
	for (int i = 0; i < 5; i++) {
		free(data[i]); // data의 i인덱스에 있는 데이터를 삭제
	}
	free(data); // data의 데이터를 삭제
	// data에 들어있는 인덱스의 값들을 삭제하고 data를 삭제해야함
	// data를 삭제해도 data의 인덱스 값들은 남아있기 때문 -> 상위값을 삭제해도 하위값이 남아있어 하위값을 먼저 삭제해준다

}

music* input() {
	music* newData = (music*)malloc(sizeof(music)); // 함수가 종료되어도 사라지지 않는다
	printf("가수 : ");
	gets_s(newData->singer, 20);
	printf("발매년도 : ");
	scanf_s("%d", &newData->release);
	getchar();
	printf("재생시간 : ");
	scanf_s("%f", &newData->playtime);
	getchar();
	return newData;
}

void print(music** p) {
	for (int i = 0; i < 5; i++) {
		printf("%s (%d년) - %.2f\n", p[i]->singer, p[i]->release, p[i]->playtime);
	}
}