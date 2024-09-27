#include "autoDriving.h"


void main() {

	carStatus car; // 차 상태 저장할 구조체

	init(&car); // 차 상태 초기화

	print_status(&car);
}