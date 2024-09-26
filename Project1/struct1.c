#include <stdio.h>


typedef struct info {
	int age;
	float weight;
}info;

typedef struct User {
	char name[10];
	//info i; // User구조체 안에 info구조체의 변수 생성 가능 - 다른 구조체를 포함할 수 있음, 변수로 만들면 info구조체의 크기만큼 User구조체의 메모리가 커짐
	info* data; // 외부참조 - 포인터변수를 만들어 사용할 수 있음 , 포인터변수로 만들면 포인터의 메모리크기만큼 User구조의 메모리가 커짐
	// 필수입력이면 변수를 만들고, 선택입력이면 포인터변수를 사용 -> 값을 입력하면 포인터변수만큼 메모리크기 증가, 입력안하면 증가없음
	struct User* next; // 내부참조
}User;

void input(info*);

void print(info*);


void main() {

	User u;
	info i;
	u.data = &i;
	u.data->age = 10; // data는 주소만 가지고 있고 .접근연산자는 현재 위치를 표시하므로 u.data.age 에서 .age 접근 불가
	// u.data->age 로 주소이동 가능 구조체에서 이동할때 사용
	u.data->weight = 75.1;
	printf("%d\n", u.data->age);

	info i2;
	User daum = { "김유신" , &i2 };

	daum.data->age = 24;
	daum.data->weight = 65.8;

	u.next = &daum;

	printf("%s %d\n", u.next->name, u.next->data->age);


	info people[3];

	input(people);

	print(people);

}

// 나이(정수)와 몸무게(실수)를 저장할 수 있는 구조체 
// 3명의 정보를 입력하고 출력 (구조체 배열)
// input - 입력함수
// print - 출력함수

void input(info* put) {

	for (int i = 0; i < 3; i++) {
		printf("나이를 입력하세요\n");
		scanf_s("%d", &put[i].age);

		printf("몸무게를 입력하세요\n");
		scanf_s("%f", &put[i].weight);
	}
}

void print(info* out) {

	for (int i = 0; i < 3; i++) {
		printf("%d 번째 사람 나이 : %d 세 몸무게 : %.1f kg\n", i + 1, out[i].age, out[i].weight);
	}
}
