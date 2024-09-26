#include <stdio.h>
#include <string.h> // gets_s�� �������� �ʿ�
#include <stdlib.h> // alloc�� �������� �ʿ�

typedef struct music {
	char singer[20]; // ������
	int release; // �߸ų⵵
	float playtime; // ����ð�
}music;

music* input();

void print( music**);


void main() {

	//music* m1 = (music*)malloc(sizeof(music)); // ����ü ������ ����°� �ƴ� �����Ҵ��� ���� �����Ϳ� ����
	//m1->release = 2019; // ���� m1�� music ����ü�� ������ �ƴ� �����ͺ����̹Ƿ� m1�� �����Ϸ��� .���ٿ����ڰ� �ƴ� ->�� �����ؾ��Ѵ�
	//m1->playtime = 4.41;
	//strcpy_s( m1->singer , 20 , "��Ŵ" );

	music** data = NULL;
	for (int i = 1; i <= 5; i++) {
		if (data == NULL) {
			data = (music**)malloc(sizeof(music));
		}
		else {
			data = (music**)realloc( data , i * sizeof(music));
		}
		data[i-1] = input();
	}

	print(data);

	// �Ҵ� �޸� ����
	for (int i = 0; i < 5; i++) {
		free(data[i]); // data�� i�ε����� �ִ� �����͸� ����
	}
	free(data); // data�� �����͸� ����
	// data�� ����ִ� �ε����� ������ �����ϰ� data�� �����ؾ���
	// data�� �����ص� data�� �ε��� ������ �����ֱ� ���� -> �������� �����ص� �������� �����־� �������� ���� �������ش�

}

music* input() {
	music* newData = (music*)malloc(sizeof(music)); // �Լ��� ����Ǿ ������� �ʴ´�
	printf("���� : ");
	gets_s(newData->singer, 20);
	printf("�߸ų⵵ : ");
	scanf_s("%d", &newData->release);
	getchar();
	printf("����ð� : ");
	scanf_s("%f", &newData->playtime);
	getchar();
	return newData;
}

void print(music** p) {
	for (int i = 0; i < 5; i++) {
		printf("%s (%d��) - %.2f\n", p[i]->singer, p[i]->release, p[i]->playtime);
	}
}