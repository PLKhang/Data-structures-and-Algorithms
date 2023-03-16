#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <time.h>
#include <random>
#include <cstdio>
#include <stdlib.h>
#include <sys/stat.h>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));
    ifstream dslh("Data/DanhSachLopHoc.txt");
    if(!dslh)
    {
        cerr << "khong the mo danh sach lop hoc!\n";
        exit(1);
    }

    string line_dslh;
    string maLH;
    while(getline(dslh, line_dslh))
    {
        short pos_LH = line_dslh.find("|");
        maLH = line_dslh.substr(0, pos_LH);

        string class_file = "Data/DanhSachSinhVien/" + maLH + ".txt";
        ifstream dsSV(class_file);
        if(!dsSV)
        {
            cerr << "khong the mo danh sach sinh vien!\n";
            exit(1);
        }

        string line_dsSV;
        string MSSV;
        while(getline(dsSV, line_dsSV))
        {
            short pos_SV = line_dsSV.find("|");
            MSSV = line_dsSV.substr(0, pos_SV);

            string student_file_location = "Data/DanhSachSinhVien/DanhSachDiemThi/" + maLH + '/';
            filesystem::create_directory (student_file_location);
            // create_directory (student_file_location);
            string student_file = student_file_location + MSSV + ".txt";

            ofstream dsdt(student_file);
            if(!dsdt)
            {
                cerr << "khong the tao file danh sach diem thi!\n";
                exit(1);
            }

            ifstream dsmh("Data/DanhSachMonHoc.txt");
            if(!dsmh) 
            {
                cerr << "Khong the mo file danh sach mon hoc!\n";
                exit(1);
            }

            string line_dsmh;
            string maMH;

            float diemThi = 0;

            while(getline(dsmh, line_dsmh))
            {
                short pos_MH = 0;
                pos_MH = line_dsmh.find("|");
                maMH = line_dsmh.substr(0, pos_MH);

                diemThi = ((rand() % 1200) * 1.0 / 100) - 5;
                diemThi = ((diemThi < 0)? (-1) : (diemThi));
                dsdt << maMH << '|' << setprecision(2) << fixed << diemThi << '\n';
            }
            dsdt.close();
            dsmh.close();
        }

        dsSV.close();
    }

    dslh.close();

    return 0;
}