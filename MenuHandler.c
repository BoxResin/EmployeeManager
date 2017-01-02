#include "Employee.h"

Employee employees[10];
int employee_n;

void AddEmployee(Employee employee)
{
	employees[employee_n] = employee;
	return;
}

int DeleteEmployee(int number)
{
	int i;

	for(i = 0; i < employee_n; i++)
	{
		if(employees[i].number == number)
			break;
	}

	if(i == employee_n)
		return 0;
	else{

		for(int j = i; j < employee_n-1; j++)
		{
			employees[j] = employees[j+1];
		}
		return 1;
	}
}

void PrintAllEmployee();
{
	for(int i = 0; i < employee_n; i++)
	{
		printf("사원번호: %d\n", employees[i].number);
		printf("나이: %d\n", employees[i].age);
		printf("봉급: %d\n", employees[i].salary);
	}

	return;
}
