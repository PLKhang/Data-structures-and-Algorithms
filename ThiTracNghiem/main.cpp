#include <iostream>
#include "Math.h"

using namespace std;

int getNumber()
{
	int x;
	cout << "Enter a number: "; cin >> x;
	return x;
}

int main(){
	cout << "Hello world!\n";
	
	int a = getNumber();
	int b = getNumber();
	
	cout << "a + b = " << add(a, b) << '\n';
	cout << "a - b = " << sub(a, b) << '\n';
	
	
	system("pause");
	return 0;
}
