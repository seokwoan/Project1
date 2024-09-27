#include "autoDriving.h"

//void gotoxy(int x, int y) {
//	COORD cd;
//	cd.X = x;
//	cd.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
//}

void main() {

	srand(time(NULL));
	carStatus car; // �� ���� ������ ����ü

	init(&car); // �� ���� �ʱ�ȭ

	//print_status(&car); // ���� �� ���� ���
	//printf("������ �������� �ӵ� 20���� �̵��Ѵ�.\n");
	//move_car(&car, 20, 'E');
	//print_status(&car);

	while (1) {
		// ������ �ޱ�
		int read_left = sensor_left();
		int read_right = sensor_right();

		// ������ ��
		if (read_left == 0 && read_right == 0) {
			printf("����\n");
			move_car(&car, 50, 50);
		}
		else if (read_left == 1 && read_right == 0) {
			printf("��ȸ��\n");
			move_car(&car, 30, 50);
		}
		else if (read_left == 0 && read_right == 1) {
			printf("��ȸ��\n");
			move_car(&car, 50, 30);
		}
		else { // read_left, read_right �Ѵ� 1 -> ����
			printf("����\n");
			move_car(&car, 0, 0);
			break;
		}
		print_status(&car);
		
		Sleep(500); // stdlib.h �ʿ�, �����̸��� ms���� -> 0.5s ������
		// usleep(); -> ns����

		system("cls"); // �ܼ�â�� ������

		// ���� ���� ��� ����ϱ�
		record_drive(&car);

	}
	// ���� ��� ���
	for (int i = 0; i < cnt; i++) {
		printf("\n=====%d ��° ���=======\n", i + 1);
		print_status(record[i]);
	}

}