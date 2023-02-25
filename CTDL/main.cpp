#include <iostream>
#include "ThuVien.h"
#include "DiemThi.h"
#include "SinhVien.h"
#include "LopHoc.h"
#include "MonHoc.h"
#include "CauHoi.h"

using namespace std;

int getNumber()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	return x;
}

int main(){
	cout << "First line\n";
	cout << "Hello world!\n";
	
	int a = 5;
	int b = getNumber();
	
	cout << "a + b = " << a + b << '\n';
	
	system("pause");
	return 0;
}
