#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define arr_size 10 // define���� ����� �����Ҷ��� Ÿ�Ի������ ���� �����ϴ�

void main() {

	srand(time(NULL));
	int arr[arr_size];

	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10 + 1; // rand �Լ��� ������ ���� ���� ū ���ڰ� ���� �����⸦ ���� ���ϴ� ���� �����´�
		// c����� rand�� �ð��� ���� ���� ���� -> �����Ͻ� ������ �������� ��� ��� -> srand(time(null)) �� ���� ����ð��� �־��� ���ึ�� 
		// ���� ���� �ٲ���
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d\n", arr[i]);
	}

	// ������( 5 ~ 17 )
	// 7, 8, 9 ���� ������ plus �̴�. ���
	// 10, 11 �� minus�̴�. ���
	// 100���� �ݺ��Ͽ� plus�̴�. ����Ҷ� ���� �迭�� ���� �����ϱ�
	// 100�� �ݺ� ������ �迭 ��ü ���
	// * �迭�� ũ��� 100���� �ϰ� 0���� �ʱ�ȭ �ϱ�

	//int num[100];
	//memset(num, 0, sizeof(num));

	//int k = 0; // num�迭�� index�� ǥ������ ����
	//for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
	//	int temp = rand() % 13 + 5;
	//	if (temp == 7 || temp == 8 || temp == 9) {
	//		printf("plus �̴�.\n");
	//		num[k++] = temp; // k index�� ���� ����Ǹ� k�� ����
	//	}
	//	else if (temp == 10 || temp == 11) {
	//		printf("minus �̴�.\n");
	//	}
	//}
	//for (int i = 0; i < k; i++) { // k index������ 7~9 ������ ���� ����Ǿ� ����
	//	printf("%d\n", num[i]);
	//}

	// �ڹٽ�ũ��Ʈ ������ �迭
	// var arr = new Array(); 1���� �迭�� ������ְ�
	// arr,push( new Array() ); ������� �迭�� �迭�� �־���
	// var arrw = [ [ 1, 2, 3 ] , [ 4, 5, 6 ] ]

	// �ڹٿ��� ������ �迭
	// int[][] arr = new int[3][4];


	// c��� ������ �迭
	int arr2[3][4];

	arr2[0][0] = 10;
	arr2[0][1] = 20;
	arr2[0][2] = 30;
	arr2[0][3] = 40;
	arr2[1][0] = 50;
	arr2[1][1] = 60;
	arr2[1][2] = 70;
	arr2[1][3] = 80;

	printf("arr2 �ּ� -> %p\n", arr2);
	printf("arr2+1 �ּ� -> %p\n", arr2 + 1);

	printf("arr2[1][0] �ּ� -> %p\n", arr2[1]);
	printf("&arr2[1][0] �ּ� -> %p\n", &arr2[1][0]);
	// &�� �ּҸ� �˷��ִ� ���������� ���������ڸ� ���� �������迭�� �ּҰ��� ������ �� ����

	printf("arr[1][0] -> %d\n", arr2[1][0]);
	printf("*arr2[1] -> %d\n", *arr2[1]); // �ش� �ּҿ� �ִ� ������ ���� ������
	// *�� �ּҿ� �ִ� ������ �������� ���������� ( ������ �ִ� ���� ������ )

	printf("*&arr2[1][0] -> %d\n", *&arr2[1][0]);
	// *& �� ���������ڰ� ���� �ִٸ� ���� ����
}