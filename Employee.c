#include "Employee.h"
Employee NewEmployee(int number, int age, int salary){
	Employee sSave;
	sSave.number = number;
	sSave.age = age;
	sSave.salary = salary;
	return sSave;
}

void PrintEmployee(struct Employee employee){
	printf("사원번호: %d\n", employee.number);
	printf("나이: %d\n", employee.age);
	printf("봉급: %d\n", employee.salary);
}


