#include <stdio.h>

void main() {

	char name[10] = { "홍길동" };
	// name = "김철수"; -> 배열에 문자열을 저장할때 초기화하면서 값을 넣어주는건 가능 이후에 따로 값 저장 불가능
	// 초기화시 값을 넣지 않았거나 수정시 입력함수를 사용해 값을 저장 혹은 수정 가능하다

	printf("%s\n", name);

	char a[20] = { "i like banana" };
	char* pstr = "i like banana";
	// pstr에 저장된는게 아닌 상수로 다른 위치에 저장되고 pstr에 주소를 넘겨줌
	printf("%s\n", pstr);
	printf("%s\n", a);

	printf("%c %c \n", a[2], pstr[2]);

	a[7] = 'h';
	printf("%s\n", a); // 변경 가능

	//pstr[7] = 'g';
	//printf("%s\n", pstr); // pstr에 저장된 문자열은 상수라서 데이터 변경이 불가능 -> 오류로 동작이 끝남

	char* brand = "삼성전자"; // 변경되지 않을 문자열
	// 고유 문자열 - 국어, 수학, 영어 -> 변경되면 안되는 문자열을 저장할때 사용

	char* subject[3] = { "국어, 수학, 영어" };
	//gets_s(pstr , 8); 
	// 포인터 변수에는 메모리 주소가 들어있음 -> 숫자를 저장했을때 그에 해당하는 메모리주소를 프로그램이 할당 받았다면 그 위치의 값이 바뀌는것
	// 포인트 변수는 메모리주소만 들어있어야 한다. 입력이 가능해도 하면 안된다
	
	printf("%s\n", pstr);

	char names[4][10] = { "이순신" , "장보고" , "장영실" , "김유신" };

	printf("%s\n", names + 2 );

	//char (*p)[10] = names;
	//printf("%s\n", p[1]);

	//char* p = names[1]; // 1차원 포인터는 하나의 값만 넣을 수 있음
	//printf("%s\n", p);

	char* p = names; // names(2차원배열)을 포인터에 넣으면 1차원 배열로 인식함
	printf("%c\n", p[0]); // 1차원 배열로 인식하기 때문에 p[0]은 문자열이 아닌 문자로 인식해 %c를 통해 출력, %s로 출력하면 오류





}