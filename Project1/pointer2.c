#include <stdio.h>

// c언어에서 함수는 메인함수 위에 존재해야 한다 -> 아래 있을 경우 정의하지 못함
// 개발의 편의를 위해 함수의 원형만 써두고 main함수 밑에서 재정의 해줌
void add(int*);
int* update();
void show(int*);
int* make();


void main() {

	int num = 10;
	add(&num); // num을 매개변수로 갖는 add 함수를 호출해 반환값을 num에 저장
	printf("%d\n", num);

	int* p;
	p = update(); // up변수의 주소를 p에 저장
	(*p)++; // *p에 up의 주소가 저장되어 있어 (*p)++은 up++ 과 같다 - * 참조연산자의 연산 우선순위가 낮기 때문에 먼저 실행시켜줌
	update();
	(*p)++;
	update();
	(*p)++;
	update();

	// 배열과 함수 1
	int arr[5] = { 10, 20, 30, 40, 50 };
	show(arr); // 배열의 이름은 메모리 첫번째 주소이다. 메모리 주소를 포인터변수로 받아줌
	// 1차원 배열에서는 arr의 주소를 받아준 포인터변수도 arr과 똑같은 표현식으로 배열의 값을 가져올 수 있다
	// arr[i] == parr[i] 이 성립한다
	// 배열의 주소를 넘겨줄때 넘겨주는 인덱스의 위치에 따라 포인터변수의 인덱스가 변한다
	// int* parr = arr + 1; 으로 넘겨주면 parr의 0번 인덱스는 arr의 1번 인덱스가 된다. arr의 0번 인덱스를 parr로 표현하면 parr[-1]이된다.
	// 통일성을 위해 사용을 지양함. 
	
	// 배열과 함수 2
	int* p2 = make(); // make에서 만들어진 arr2의 주소를 가지고 있음
	for (int i = 0; i < 5; i++) {
		printf("%d\n", p2[i]);
	}


}


void add(int* temp) { // temp에 num의 값을 저장

	*temp = *temp + 50;
	//return temp; // temp값 리턴 -> num에 저장
	// 포인터변수를 사용하면 리턴없이 사용가능하다

}

int* update() {

	static int up = 1; // up은 update의 지역변수이므로 실행될대마다 재실행 된다. static을 붙여 정적 변수로 만들어준다
	// 정적 변수는 한번만 할당되고 재할당되지 않음
	// static은 단 한번만 실행 이후엔 실행되지 않음 함수가 종료되어도 변수는 남아있어 함수가 재실행 되어도 이전에 할당된 값이 남아있음

	printf("변수 up -> %d\n", up);
	return &up;

}

// 배열과 함수 1 
void show(int* parr) {
	for (int i = 0; i < 5; i++) {
		printf("%d\n", parr[i]);
	}
}

// 배열과 함수2
int* make(){

	static int arr2[5] = { 100, 200, 250, 350, 110 }; // 함수에서 만든 배열을 다른 함수로 보낼때는 지역변수로 만들면 함수가 실행되고 
	// 지역변수가 사라지기 때문에 정적변수로 만들어줘서 유지되게 해야한다.
	// 정적변수는 한번만 실행되고 프로그램이 끝날때까지 남아있다 
	return arr2; // 1차원 배열의 주소를 넘겨줌
}
