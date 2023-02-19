#include <iostream>
#include "headerTest.h"

using namespace std;

int main(){
	cout << "Hello world!\n";
	cout << "2 + 5 = " << add(2, 5) << '\n';
	cout << "2 - 5 = " << sub(2, 5) << '\n';
	cout << "2 * 5 = " << mul(2, 5) << '\n';
	cout << "2 / 5 = " << dev(2, 5) << '\n';
	
	cout << "end of program\n";
	return 0;
}
