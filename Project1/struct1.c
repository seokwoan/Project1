#include <stdio.h>


typedef struct info {
	int age;
	float weight;
}info;

typedef struct User {
	char name[10];
	//info i; // User����ü �ȿ� info����ü�� ���� ���� ���� - �ٸ� ����ü�� ������ �� ����, ������ ����� info����ü�� ũ�⸸ŭ User����ü�� �޸𸮰� Ŀ��
	info* data; // �ܺ����� - �����ͺ����� ����� ����� �� ���� , �����ͺ����� ����� �������� �޸�ũ�⸸ŭ User������ �޸𸮰� Ŀ��
	// �ʼ��Է��̸� ������ �����, �����Է��̸� �����ͺ����� ��� -> ���� �Է��ϸ� �����ͺ�����ŭ �޸�ũ�� ����, �Է¾��ϸ� ��������
	struct User* next; // ��������
}User;

void input(info*);

void print(info*);


void main() {

	User u;
	info i;
	u.data = &i;
	u.data->age = 10; // data�� �ּҸ� ������ �ְ� .���ٿ����ڴ� ���� ��ġ�� ǥ���ϹǷ� u.data.age ���� .age ���� �Ұ�
	// u.data->age �� �ּ��̵� ���� ����ü���� �̵��Ҷ� ���
	u.data->weight = 75.1;
	printf("%d\n", u.data->age);

	info i2;
	User daum = { "������" , &i2 };

	daum.data->age = 24;
	daum.data->weight = 65.8;

	u.next = &daum;

	printf("%s %d\n", u.next->name, u.next->data->age);


	info people[3];

	input(people);

	print(people);

}

// ����(����)�� ������(�Ǽ�)�� ������ �� �ִ� ����ü 
// 3���� ������ �Է��ϰ� ��� (����ü �迭)
// input - �Է��Լ�
// print - ����Լ�

void input(info* put) {

	for (int i = 0; i < 3; i++) {
		printf("���̸� �Է��ϼ���\n");
		scanf_s("%d", &put[i].age);

		printf("�����Ը� �Է��ϼ���\n");
		scanf_s("%f", &put[i].weight);
	}
}

void print(info* out) {

	for (int i = 0; i < 3; i++) {
		printf("%d ��° ��� ���� : %d �� ������ : %.1f kg\n", i + 1, out[i].age, out[i].weight);
	}
}
