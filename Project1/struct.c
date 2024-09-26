#include <stdio.h>
#include <string.h>

// c언어는 절차지향 언어이기 때문에 struct의 위치는 사용하고자 하는 함수의 위에 위치해야한다.
// struct는 함수처럼 main의 윗부분에 작성한다
struct member { // struct member 전부가 구조체의 이름 -> 데이터타입의 이름
	int age;
	float eyes;
	char name[10]; // 구조체에서는 데이터를 직접 넣는걸 허용하지 않음
};


typedef struct grade {
	int kor;
	int mat;
	int eng;
	int total;
	float avg;
}grade;
// typedef을 통해 struct grade 타입의 이름을 grade로 짧게 바꿔 사용의 편의성을 높임

void tot_avg( grade *p ) {

	for (int i = 0; i < 5; i++) {
		p[i].total = p[i].kor + p[i].mat + p[i].eng;
		p[i].avg = p[i].total / 3.0;
	}
}

void main() {

	struct member m;
	// struct member -> 가 타입의 이름 struct member 타입의 변수를 만들어줌
	m.age = 24;
	m.eyes = 1.2;

	printf("%d %0.1f\n", m.age, m.eyes);
	// m.name = "홍길동";  -> 배열의 선언이 이미 끝나서 값을 넣어주지 못함
	// 입력을 받거나 string.h에 있는 함수를 사용해서 값을 넣어줘야한다

	strcpy_s(m.name, 10, "홍길동"); // 문자열을 복사해서 저장해주는 함수
	// strcpy_s( 저장할변수 , 변수의 크기 , 저장할문자열 ); 
		// -> 저장할 변수는 선언이 끝난 배열, 배열의 크기 , 배열에 넣어줄 문자열
		// 구조체의 경우 선언시 데이터값의 초기화를 허용하지 않기 때문에 구조체의 배열변수는 바로 값을 넣지못함
	printf("%s\n", m.name);

	
	grade std1;
	// grade std1 = { 88, 99, 75 }; -> 구조체의 초기화방법 : {}를 사용하여 초기화 값이 없는 곳은 0이 들어감 배열처럼 초기화
	std1.kor = 88;
	std1.mat = 99;
	std1.eng = 75;
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;

	grade std[5] = { { 88, 90, 34 } , { 66, 45, 61 } , { 90, 11, 45 } , { 87, 34, 91 } , { 84, 72, 89 } }; 
	// 구초제의 배열은 2차원 배열처럼 초기화 가능
	// c언어는 배열을 만들면 배열에 객체가 만들어진다. - 자바의 경우는 배열을 만들고 배열에 객체를 생성해서 저장해줘야한다
	std[0].kor = 84; // 이미 객체가 존재해 바로 사용가능
	// scnaf_s( "%d" , &std[0].kor ); 입력받아서 넣을수있음

	tot_avg(std);

	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f\n", std[i].kor, std[i].mat, std[i].eng, std[i].total, std[i].avg);
	}

}

// 구조체 : c언어의 기본 데이터 타입으로 새롭게 정의하는 사용자 정의 데이터 타입
// 사전적 의미 : 각 부분과 요소들이 모여 이루어진 물체나 형태 