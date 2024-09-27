// main 파일에는 헤더파일만 include해준다 -> 각 헤더파일에 필요한 파일을 include해줌으로  편의성을 높인다 
// 각 헤더파일에 필요한 파일을 include해준다 -> 중복 헤더파일에 헤더파일을 include해준다

#include "struct_file.h";

 // 사용자가 만든 헤더파일은 ""로 호출
// include는 해당파일에 있는 내용 전체가 include된 위치에 들어간다 -> func_file.h파일이 include 된 위치의 위에 stdio.h가 include가 되어있어
// func_file.h에 stdio.h를 include하지 않아도 사용가능


void main() {

	led red;

	init(&red);

	print(&red);

	power(&red);

	power(&red);

}