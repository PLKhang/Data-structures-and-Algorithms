#include <iostream>

using namespace std;

int getNumber()
{
	int x;
	cout << "Enter a number: "; cin >> x;
	return x;
}

int main(){
	cout << "Hello world!\n";
	cout << "alo alo 1 2 3\n";
	
	int a = getNumber();
	int b = getNumber();
	
	system("pause");
	return 0;
}
