#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getNumber()
{
	int x = 0;
	cout << "Enter a number: ";
	cin >> x;
	return x;
}

bool DocDanhSachDiemThi(string mssv, string tenLH)
{
	string fileName = "Data/DanhSachSinhVien/DanhSachDiemThi/" + tenLH + '/' + mssv + ".txt";
	cout << "location: " << fileName << '\n';
	ifstream file(fileName);
	if (!file)
	{
		cerr << "Khong the mo file diem thi!\n";
		return 0;
	}

	string line;
	string maMH;
	float diemThi = 0;
	cout << "Mon:\tDiem\n";
	while (getline(file, line))
	{
		short pos = 0;
		short field_num = 1;
		string field;
		while ((pos = line.find("|")) != string::npos)
		{
			field = line.substr(0, pos);
			line.erase(0, pos + 1);
			switch (field_num)
			{
			case 1:
				maMH = field;
				break;
			case 2:
				diemThi = stod(field);
				cout << "stod(field): " << stof(field) << '\n';
				break;
			default:
				cout << "Co loi trong ham doc diem thi\n";
				break;
			}
			field_num++;
			/*
				them diem thi vao dslk tai day
			*/
		}
		cout << maMH << '\t' << diemThi << '\n';
	}
	file.close();

	return 1;
}

int main()
{
	cout << "Hello world!\n";

	int a = getNumber();
	int b = getNumber();

	DocDanhSachDiemThi("N21DCCN042", "D21CQCN01-N");

	system("pause");
	return 0;
}
