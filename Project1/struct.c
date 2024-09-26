#include <stdio.h>
#include <string.h>

// c���� �������� ����̱� ������ struct�� ��ġ�� ����ϰ��� �ϴ� �Լ��� ���� ��ġ�ؾ��Ѵ�.
// struct�� �Լ�ó�� main�� ���κп� �ۼ��Ѵ�
struct member { // struct member ���ΰ� ����ü�� �̸� -> ������Ÿ���� �̸�
	int age;
	float eyes;
	char name[10]; // ����ü������ �����͸� ���� �ִ°� ������� ����
};


typedef struct grade {
	int kor;
	int mat;
	int eng;
	int total;
	float avg;
}grade;
// typedef�� ���� struct grade Ÿ���� �̸��� grade�� ª�� �ٲ� ����� ���Ǽ��� ����

void tot_avg( grade *p ) {

	for (int i = 0; i < 5; i++) {
		p[i].total = p[i].kor + p[i].mat + p[i].eng;
		p[i].avg = p[i].total / 3.0;
	}
}

void main() {

	struct member m;
	// struct member -> �� Ÿ���� �̸� struct member Ÿ���� ������ �������
	m.age = 24;
	m.eyes = 1.2;

	printf("%d %0.1f\n", m.age, m.eyes);
	// m.name = "ȫ�浿";  -> �迭�� ������ �̹� ������ ���� �־����� ����
	// �Է��� �ްų� string.h�� �ִ� �Լ��� ����ؼ� ���� �־�����Ѵ�

	strcpy_s(m.name, 10, "ȫ�浿"); // ���ڿ��� �����ؼ� �������ִ� �Լ�
	// strcpy_s( �����Һ��� , ������ ũ�� , �����ҹ��ڿ� ); 
		// -> ������ ������ ������ ���� �迭, �迭�� ũ�� , �迭�� �־��� ���ڿ�
		// ����ü�� ��� ����� �����Ͱ��� �ʱ�ȭ�� ������� �ʱ� ������ ����ü�� �迭������ �ٷ� ���� ��������
	printf("%s\n", m.name);

	
	grade std1;
	// grade std1 = { 88, 99, 75 }; -> ����ü�� �ʱ�ȭ��� : {}�� ����Ͽ� �ʱ�ȭ ���� ���� ���� 0�� �� �迭ó�� �ʱ�ȭ
	std1.kor = 88;
	std1.mat = 99;
	std1.eng = 75;
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;

	grade std[5] = { { 88, 90, 34 } , { 66, 45, 61 } , { 90, 11, 45 } , { 87, 34, 91 } , { 84, 72, 89 } }; 
	// �������� �迭�� 2���� �迭ó�� �ʱ�ȭ ����
	// c���� �迭�� ����� �迭�� ��ü�� ���������. - �ڹ��� ���� �迭�� ����� �迭�� ��ü�� �����ؼ� ����������Ѵ�
	std[0].kor = 84; // �̹� ��ü�� ������ �ٷ� ��밡��
	// scnaf_s( "%d" , &std[0].kor ); �Է¹޾Ƽ� ����������

	tot_avg(std);

	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f\n", std[i].kor, std[i].mat, std[i].eng, std[i].total, std[i].avg);
	}

}

// ����ü : c����� �⺻ ������ Ÿ������ ���Ӱ� �����ϴ� ����� ���� ������ Ÿ��
// ������ �ǹ� : �� �κа� ��ҵ��� �� �̷���� ��ü�� ���� 