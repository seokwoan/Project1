// c언어 배열
#include <stdio.h>
#include <string.h>
#define size 3 // 심볼릭상수 정의하는 방법2

void main() {
	// c언어에서 배열 생성
	int arr[5];
	// 데이터타입 변수명[배열크기];
	// int arr[5] = { 1, 2, 3, 4, 5 }; // 배열의 초기화는 {}를 사용
	// c언어에서 배열크기를 변수를 이용해 지정할 수 없다 - 배열의 크기는 상수로 지정
	
	// int a[3];
	// a = { 1, 2, 3 }; 생성후 값을 넣어주는건 불가능
	
	int arr2[] = { 11, 22, 33, 44 }; // 크기를 정하지 않고 값을 넣어줘도됨

	//const int size = 3; // 심볼릭상수 정의하는 방법1
	int arr3[size]; 
	// const로 만든 심볼릭상수는 사용불가, define으로 만든 심볼릭 상수는 사용가능
	// const 상수는 실행중 만들어지는 상수, define 상수는 컴파일중 만들어지는 상수
	// 컴파일중 만들어진 상수는 배열의 크기를 나타내는 변수로 사용사능

	int number[5];
	// int number[10] = { 0 } ; -> 배열의 모든 인덱스의 초기값이 0으로 설정됨
	 
	memset( number , 0 , 5*sizeof(int) );
	// 사용하려면 <string.h>가 필요하다
	// c언어에서 배열의 이름은 배열의 주소를 나타냄
	// memser( 변수주소 , 초기화해줄값 , 배열의크기(바이트의 값) )
	// number는 int타입이 10개 저장되므로 4byte가 10개 -> 40byte
	// sizeof(int) -> 인트의 메모리크기를 계산해줌 -> 4byte , 배열등의 메모리크기도 계산해줌
	// memset은 byte단위로 초기값을 넣어줌 -> 1을 넣으면 각 바이트의 끝에 1을 넣어주게됨
	// 00000001/00000001/00000001/00000001 -> 2^24 + 2^16 + 2^8 + 2^0의 값인 16843009가 나오게 됨

	//printf("%d", number[8]);
	// 배열에 초기값을 주지 않으면 쓰레기값이 들어있다.

	number[0] = 10;
	number[1] = 20;
	number[2] = 30;
	number[3] = 40;
	number[4] = 50;

	printf("%d \n", number[4]);

	for (int i = 0; i < sizeof(number)/sizeof(int) ; i++) {
		printf("%d \n\n\n", number[i]);
	}

	int apple[10] = { 45, 34, 67, 23,12, 69, 51, 89, 99, 28 };

	// 사과 상자가 10박스가 있다
	// 각 박스안에 들어있는 사과 갯수이다.
	// 이중 50개 이상 사과박스는 몇번째 몇번째 박스인지 출력

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		if (apple[i] >= 50) {
			printf("%d번째 박스 %d개 \n\n", i + 1, apple[i]); // 배열의 인덱스는 0부터 시작
		}
	}

	int grape[5];

	// 포도 5송이가 있다
	// 한송이에 포도가 몇알 달려있는지 입력하여 grape배열에 저장하고 전체 출력하세요

	for (int i = 0; i < 5; i++) {
		printf("%d째 포도송이", i + 1);
		//scanf_s("%d", &grape[i]);
		scanf_s("%d", grape + i);
		// grape -> 배열의 변수명은 0번 인덱스 앞의 주소를 표시 -> 주소값에 +1 을 해주면 1번 인덱스의 주소를 표시해줌
		// grape + 1 -> 1번 인덱스의 앞 , grape + 4 -> 4번 인덱스의 앞
		// c언어는 메모리주소를 통해 값을 넣을 수 있음
	}

	for (int i = 0; i < sizeof(grape) / sizeof(int); i++) {
		printf("%d번째 포도송이에 %d알\n", i + 1, grape[i]);
	}
	




}