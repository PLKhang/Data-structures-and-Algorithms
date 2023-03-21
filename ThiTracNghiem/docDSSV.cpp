#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    ifstream dslh("Data/DanhSachLopHoc.txt");
    if(!dslh)
    {
        cerr << "Khong the doc file ds lop hoc!\n";
        exit(1);
    }

    string lineLH;
    string tenLH;
    string maLH;
    int nienKhoa;

    cout << '\n' <<setw(15) << left << "Ma lop" << setw(70) << "Ten lop" << setw(10) << "Nien khoa\n";
    while(getline(dslh, lineLH)){
        short posLH = 0;
        short field_LH_num = 1;
        string field_LH;
        while((posLH = lineLH.find("|")) != string::npos)
        {
            field_LH = lineLH.substr(0, posLH);
            lineLH.erase(0, posLH + 1);
            switch(field_LH_num)
            {
                case 1: 
                    maLH = field_LH;
                    break;
                case 2:
                    tenLH = field_LH;
                    break;
                case 3:
                    nienKhoa = atoi(field_LH.c_str());
                    break;
            }
            field_LH_num++;
        }
        // cout << setw(15) << left << maLH << setw(70) << tenLH << "|" << setw(10) << nienKhoa << '\n';
        // cout << setw(15) << left << maLH << setw(100) << left << tenLH << "|" << setw(10) << nienKhoa << '\n';
        cout << setw(15) << left << maLH << setw(70) << left << (tenLH.substr(0, 67) + "...") << "|" << setw(10) << nienKhoa << '\n';


    }
    dslh.close();

    return 0;
}