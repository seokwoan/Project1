#include <stdio.h>


void input( int*, int);

void main() {

	int score[5][5];

	input(score, sizeof(score) / sizeof(int) / 5 );

	for (int i = 0; i < 5; i++) {
		printf("%d�� �л� �������� : %d\n", i + 1 , score[i][0]);
		printf("%d�� �л� �������� : %d\n", i + 1, score[i][1]);
		printf("%d�� �л� �������� : %d\n", i + 1, score[i][2]);
		printf("%d�� �л� ���� : %d\n", i + 1, score[i][3]);
		printf("%d�� �л� ��� : %d\n", i + 1 ,score[i][4]);
	}

}

// 5���� �л��� �ִ�.
// ���� ���� ���� 3������ ������ �Է��ϰ� ������ ����� �����ϼ���
/// ���� �Է� �Լ� - input
// ( 5���� �л��� ���� ������ ����, ����� ������ �� �ִ� �迭 ����

void input( int* score, int size) {
	int(*sc)[5] = score;

	for (int i = 0; i < size; i++) {
			printf("%d�� �л��� ��������", i + 1);
			scanf_s("%d", &sc[i][0]); // scanf_s�� ����� �޸� �ּҸ� �־�����Ѵ�
			// sc[i] + 0 ���� �ּ� ǥ���� ����
			printf("%d�� �л��� ��������", i + 1);
			scanf_s("%d", &sc[i][1]);
			printf("%d�� �л��� ��������", i + 1);
			scanf_s("%d", &sc[i][2]);

			sc[i][3] = sc[i][0] + sc[i][1] + sc[i][2];
			sc[i][4] = sc[i][3] / 3;
	}

}