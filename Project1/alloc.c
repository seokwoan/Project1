#include <stdio.h>
#include <stdlib.h>

void main(){

	int* std1 = (int*)malloc(12);
	std1[0] = 90;
	std1[1] = 88;
	std1[2] = 76;

	int* std2 = (int*)malloc(12);
	std2[0] = 79;
	std2[1] = 57;
	std2[2] = 90;

	int** parr = (int**)malloc(12 * sizeof(int*)); // �����͹迭 ���� 12��
	parr[0] = std1;
	parr[1] = std2;
	parr[2] = (int*)malloc(12);
	parr[3] = (int*)malloc(12);

	printf("%d\n", parr[0][1]); // ù��° �л��� 88�� ���

	// �������� �̸��� �����ϱ� ���� �����Ҵ�
	//char* name = (char*)malloc(10);
	char** name = (char**)malloc(sizeof(char*));
	int cnt = 1;
	while (1) {
		name[cnt - 1] = (char*)malloc(10);
		printf("�̸� : ");
		gets_s(name[cnt - 1], 10);
		cnt++;
		name = (char**)realloc(name, cnt * sizeof(char*));
		// ������ = realloc( ������ , �Ҵ���� �޸� ũ�� ) -> realloc�� ũ�⸦ �ٲ� �Ҵ���� �ּҸ� ������ �������� �Է��ؾ��Ѵ�.
	}

	/*int num = 10;
	short s = 20;
	double d = 3.14;

	int arr[20];*/

	//int size;
	//printf("������ � : ");
	//scanf_s("%d", &size);
	//int *p = (int*)malloc( size * sizeof(int) );
	//// malloc�� ���� void* malloc( size_t _Size ); void* -> �޸��ּҸ� ��ȯ, Size -> �Ҵ���� �޸� ũ��
	//// int *p�� �޾��ٶ� ������Ÿ���� ��ġ���� ����� ���Ǹ� ���̱����� ���� ����ȯ�� ���� 
	//// intŸ������ ����ȯ�� �Ǿ� int�� �迭ó�� ����� �� �ִ�
	//p[0] = 10;
	//p[1] = 20;
	//p[2] = 30;
	//p[3] = 40;
	//p[4] = 50; // 20����Ʈ�� �޸𸮿����� �Ҵ� �޾����Ƿ� 4����Ʈ�� int�� 5���� ����ȴ�
	//printf("%d\n", p[2]);


	//int* pc = (int*) calloc( 4 , sizeof(int) );
	//// calloc�� ���� void *calloc( size_t _Count , size )-> ���� , ������Ÿ���� ũ��
	//pc[0] = 100;
	//pc[1] = 200;
	//pc[2] = 22;
	//pc[3] = 500;;
	//printf("%d %d %d\n", pc[0] , pc[1] , pc[2] );

	//p = ralloc(p, 16);
	



}

// heap���� ���� �Ҵ��� ���� ����ϴ� 4���� �Լ�
// ( malloc, calloc, realloc ) -> �Ҵ� ,  free -> ��ü(�ݳ�)