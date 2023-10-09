#include <iostream>
using namespace std;
int* ptr;

class Sfunc {
	int coef1, coef2, coef3;
	int expon1, expon2, expon3;


public:
	Sfunc() {
		coef1 = 0;
		coef2 = 0;
		coef3 = 0;
		expon1 = 0;
		expon2 = 0;
		expon3 = 0;
	};
	Sfunc(int a, int x, int b, int y, int c, int z) {
		coef1 = a;
		coef2 = b;
		coef3 = c;
		expon1 = x;
		expon2 = y;
		expon3 = z;
	} 
	void say() {
		cout << coef1 << "x^" << expon1 << " + " << coef2 << "x^" << expon2 << " + " << coef3 << "x^" << expon3;
	}
};
int main(){
	/*
	string input;
	cout << "enter function : ";
	cin >> input;
	*/
	Sfunc func1;
	Sfunc func2(2,3,6,2,7,9);
	func2.say();
	return 0;
}
