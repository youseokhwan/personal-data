/*

// +, -, *, /, % 연산을 할 수 있는 프로그램을 제작하여보자.
// switch문 이용

#include <stdio.h>
int main(void)
{
	char op;
	int x, y;

	printf("수식을 입력하시오: ");
	scanf("%d %c %d", &x, &op, &y);

	switch(op)
	{
		case '+':
			printf("%d %c %d = %d\n", x, op, y, x + y);
			break;
		case '-':
			printf("%d %c %d = %d\n", x, op, y, x - y);
			break;
		case '*':
			printf("%d %c %d = %d\n", x, op, y, x * y);
			break;
		case '/':
			printf("%d %c %d = %d\n", x, op, y, x / y);
			break;
		case '%':
			printf("%d %c %d = %d\n", x, op, y, x % y);
			break;
		default:
			printf("지원되지 않는 연산자입니다.\n");
			break;
	}

	return 0;
}

*/