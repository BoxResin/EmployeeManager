#include <stdio.h>
#include "Employee.h"
#include "MenuHandler.h"

int main(void)
{
	while (1)
	{
		int command;

		printf("[ 메뉴 ]\n");
		printf("1. 사원 추가\n");
		printf("2. 사원 삭제\n");
		printf("3. 전체 사원 출력\n");
		printf("4. 끝내기\n");
		printf("번호 입력: ");
		scanf("%d", &command);

		printf("\n\n");

		switch (command)
		{
		case 1:
			{
				int number;
				int age;
				int salary;

				printf("사원번호: ");
				scanf("%d", &number);

				printf("나이: ");
				scanf("%d", &age);

				printf("봉급: ");
				scanf("%d", &salary);

				AddEmployee(NewImployee(number, age, salary));
			}
			break;

		case 2:
			{
				int number;
				printf("삭제할 사원번호: ");
				scanf("%d", &number);

				if (DeleteEmployee(number))
					printf("삭제 성공");
				else
					printf("해당 번호의 사원이 없습니다.");
			}
			break;

		case 3:
			PrintAllEmployee();
			break;

		case 4:
			return 0;
		}
	}
	return 0;
}
