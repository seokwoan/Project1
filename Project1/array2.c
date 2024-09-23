#include <stdio.h>

void main() {
	//int a[3]; // 10진수 정수 3개 저장 가능한 배열
	//
	//char word[6] = { 't', 'a' , 'b' , 'l', 'e' , NULL }; // 문자 5개 저장 가능한 배열
	//// char 타입의 배열을 만들면 문자열을 다룰수 있음

	//for (int i = 0; i < 5; i++) {
	//	printf("%c", word[i]);
	//}

	//printf("\n %s \n", word);
	//// 서식문자 %s를 통해 문자열로 출력했을때 문자배열을 문자열로 출력
	//// 문자열 출력 방식은 주소의 시작위치(지정위치)에서 끝까지 전부 출력 -> 끝나는 지점을 알려주지 않으면 비정상적 종료
	//// 출력하고자 하는 문자열의 마지막 인덱스에 NULL(종료를 의미)을 넣어주어 끝나는 위치를 알려줌

	//char like[10] = { "banana" };
	//printf("%s\n", like);
	//// 문자의 배열에 문자열을 저장하면 문자열을 하나씩 잘라서 문자로 저장
	//// { b , a , n , a , n , a , NULL }의 형태로 저장된다. 따라서, %s로 like변수를 출력하면 banana가 출력됨

	//// 문자열 입력하기 위한 방법
	//// 문자 입력 함수
	//char ch2 = getch(); // 입력하면 바로 저장됨 -> 입력값이 화면에 안나오고 바로 저장됨 엔터키 누를 필요 없음
	//printf("getch  입력 :  %c\n", ch2); 
	//char ch3 = getchar(); // 입력값이 화면에 나오고 엔터키를 눌러야 저장됨
	//printf("getchar 입력 : %c\n", ch3);
	//putchar(ch3); // 문자 출력 함수

	//getch(); // getchar는 문자 하나만 가져옴
	// 엔터키도 문자여서 버퍼에 남아있음 -> 버퍼에서 엔터키를 제거해줘야함


	//// 문자열 함수
	//char str[50];
	//puts("\n문자열 입력 : ");
	//gets_s( str , sizeof(str) ); // gets도 scanf와 마찬가지로 _s를 붙이는걸 권장
	//// gets_s( 저장할배열 , 배열의메모리크기 ); 

	//puts(str);

	char info[100] = { "나는 프로그래밍이 참 재미있다." };

	// 참 재미있다만 출력하고
	// 나는 프로그래밍 이라고만 출력되기 위해 수정하여 출력
	// 참고사항 한글1자는 알파벳2자에 해당된다.

	printf("%s\n", info + 18);
	info[15] = NULL;
	printf("%s\n\n", info);


	// 나의 이름과 나이, 전화번호를 입력하고 출력하기
	char name[7];
	int age;
	char tel[14];
	printf("이름을 입력하세요\n");
	gets_s(name, sizeof(name));
	printf("나이를 입력하세요\n");
	scanf_s( "%d" , &age);
	getchar();
	printf("연락처를 입력하세요\n");
	gets_s(tel, sizeof(tel));

	printf("\n이름 : %s\n", name);
	printf("나이 : %d세\n", age);
	printf("연락처 : %s\n", tel);




}