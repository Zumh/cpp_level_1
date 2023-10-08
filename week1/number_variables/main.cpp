#include <iostream>
using namespace std;
// basically this is how we pass value in variables
int main(void){
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	two = one;
	three = two;
	four = three;

	cout << four << endl;
	return(0);
}
