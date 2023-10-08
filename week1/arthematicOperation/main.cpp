#include <iostream>

using namespace std;

int main(void){
	int number1 = 0, number2 = 0;
	// addition operator
	cin >> number1 >> number2;

	cout << number1 + number2 << endl;
	double doubleNumber = 7.0, doubleNumber2 = 3.00;
	// even though our number is double we get whole number because cout doesn't print any digit after decimal if some digits are not greater than zero
	cout << doubleNumber + doubleNumber2 << endl;
	return(0);
}
