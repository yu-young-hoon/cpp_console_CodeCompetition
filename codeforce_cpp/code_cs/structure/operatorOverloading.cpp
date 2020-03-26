#pragma once
#include <iostream>

using namespace std;

class Integer
{
private:
	int value = 0;
public:
	// 전위 연산자
	Integer& operator++()
	{
		value = value + 1;
		return *this;
	}

	// 후위 연산자
	Integer& operator++(int)
	{
		Integer temp;
		temp = value;
		value = value + 1;
		return temp;
	}

	Integer& operator+(const int newValue) {
		value = value + newValue;
		return *this;
	}

	Integer& operator=(const int newValue) {
		value = newValue;
		return *this;
	}

	void printValue()
	{
		cout << value << endl;
	}
};

void main() {
	Integer integer;

	integer = ++integer;
	integer.printValue();

	integer = integer++;
	integer.printValue();

	integer = integer + 4;
	integer.printValue();

	integer = integer.operator+(5);
	integer.printValue();

	integer = 0;
	integer.printValue();
}