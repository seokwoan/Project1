// main ���Ͽ��� ������ϸ� include���ش� -> �� ������Ͽ� �ʿ��� ������ include��������  ���Ǽ��� ���δ� 
// �� ������Ͽ� �ʿ��� ������ include���ش� -> �ߺ� ������Ͽ� ��������� include���ش�

#include "struct_file.h";

 // ����ڰ� ���� ��������� ""�� ȣ��
// include�� �ش����Ͽ� �ִ� ���� ��ü�� include�� ��ġ�� ���� -> func_file.h������ include �� ��ġ�� ���� stdio.h�� include�� �Ǿ��־�
// func_file.h�� stdio.h�� include���� �ʾƵ� ��밡��


void main() {

	led red;

	init(&red);

	print(&red);

	power(&red);

	power(&red);

}