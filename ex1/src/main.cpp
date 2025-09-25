#include <iostream>
#include <string>
#include <sys/types.h>

void test();
void employeeTest();
void printSomething(int y);
int	 addNum(int a, int b);

struct Employee {
	std::string firstName;
	std::string lastName;
	uint		dateOfBirth;
	uint		salary;
};

int main() {

	return 0;
}

void employeeTest() {
	int count;
	std::cout << "enter employee count: ";
	std::cin >> count;

	Employee employees[count];
	for (int i = 0; i < count; i++) {

		int count;
		std::cout << "enter employee count: ";
		std::cin >> count;

		employees[i] = {.firstName = "dsafdsa"};
	}
}

void test() {
	std::cout << "Hello, world!" << std::endl;

	int a;
	std::cout << "enter num a: ";
	std::cin >> a;

	int b;
	std::cout << "enter num b: ";
	std::cin >> b;

	std::cout << "result: ";
	printSomething(addNum(a, b));
}

void printSomething(int y) {
	std::cout << y << std::endl;
}

int addNum(int a, int b) {
	return a + b;
}
