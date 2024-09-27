#include "autoDriving.h"

//void gotoxy(int x, int y) {
//	COORD cd;
//	cd.X = x;
//	cd.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
//}

void main() {

	srand(time(NULL));
	carStatus car; // 차 상태 저장할 구조체

	init(&car); // 차 상태 초기화

	//print_status(&car); // 현재 차 상태 출력
	//printf("차량을 동쪽으로 속도 20으로 이동한다.\n");
	//move_car(&car, 20, 'E');
	//print_status(&car);

	while (1) {
		// 센서값 받기
		int read_left = sensor_left();
		int read_right = sensor_right();

		// 센서값 비교
		if (read_left == 0 && read_right == 0) {
			printf("직진\n");
			move_car(&car, 50, 50);
		}
		else if (read_left == 1 && read_right == 0) {
			printf("좌회전\n");
			move_car(&car, 30, 50);
		}
		else if (read_left == 0 && read_right == 1) {
			printf("우회전\n");
			move_car(&car, 50, 30);
		}
		else { // read_left, read_right 둘다 1 -> 멈춤
			printf("정지\n");
			move_car(&car, 0, 0);
			break;
		}
		print_status(&car);
		
		Sleep(500); // stdlib.h 필요, 딜레이를줌 ms단위 -> 0.5s 딜레이
		// usleep(); -> ns단위

		system("cls"); // 콘솔창을 지워줌

		// 차량 운행 경로 기록하기
		record_drive(&car);

	}
	// 운행 기록 출력
	for (int i = 0; i < cnt; i++) {
		printf("\n=====%d 번째 기록=======\n", i + 1);
		print_status(record[i]);
	}

}