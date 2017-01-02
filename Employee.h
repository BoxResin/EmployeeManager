#ifndef EMPLOYEE
#define EMPLOYEE
#include<stdio.h>
#include<stdlib.h>
typedef struct Employee
{
	int number;
	int age;
	int salary;
}Employee;

Employee NewEmployee(int number, int age, int salary);
void PrintEmployee(struct Employee employee);

#endif
