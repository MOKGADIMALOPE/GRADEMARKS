#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int mark;

	cout << "Please enter your mark" << endl;
	cin >> mark;

	if (mark > 80) {
		cout << "Distiction " << endl;

	}
	else if (mark >= 60 && mark < 80) {
		cout << "Credit " << endl;


	}
	else if (mark >= 50 && mark < 60) {
		cout << "Supplement " << endl;
	}
	else if (mark >= 40 && mark < 50) {
		cout << "Pass " << endl;
	}
	else if (mark >= 30 && < 40) {
		cout << " Fail" << endl;
 }




	return 0;

}