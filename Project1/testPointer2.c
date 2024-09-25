#include <stdio.h>


void input( int*, int);

void main() {

	int score[5][5];

	input(score, sizeof(score) / sizeof(int) / 5 );

	for (int i = 0; i < 5; i++) {
		printf("%d번 학생 국어점수 : %d\n", i + 1 , score[i][0]);
		printf("%d번 학생 수학점수 : %d\n", i + 1, score[i][1]);
		printf("%d번 학생 영어점수 : %d\n", i + 1, score[i][2]);
		printf("%d번 학생 총점 : %d\n", i + 1, score[i][3]);
		printf("%d번 학생 평균 : %d\n", i + 1 ,score[i][4]);
	}

}

// 5명의 학생이 있다.
// 국어 수학 영어 3과목의 성적을 입력하고 총점과 평균을 저장하세요
/// 성적 입력 함수 - input
// ( 5명의 학생의 과목 점수와 총점, 평균을 저장할 수 있는 배열 생성

void input( int* score, int size) {
	int(*sc)[5] = score;

	for (int i = 0; i < size; i++) {
			printf("%d번 학생의 국어점수", i + 1);
			scanf_s("%d", &sc[i][0]); // scanf_s는 저장될 메모리 주소를 넣어줘야한다
			// sc[i] + 0 으로 주소 표현이 가능
			printf("%d번 학생의 수학점수", i + 1);
			scanf_s("%d", &sc[i][1]);
			printf("%d번 학생의 영어점수", i + 1);
			scanf_s("%d", &sc[i][2]);

			sc[i][3] = sc[i][0] + sc[i][1] + sc[i][2];
			sc[i][4] = sc[i][3] / 3;
	}

}