// Sinh viên và Danh sách sinh viên
/////////////////////////////////////////
#include "DiemThi.h"

#ifndef DANH_SACH_SINH_VIEN
#define DANH_SACH_SINH_VIEN

struct SinhVien
{
    char MSSV[11];
    char ho[21];
    char ten[16];
    char password[21];
    bool phai; // male: 0     female: 1
    PtrDT danhSachDiemThi;
};

struct DanhSachSinhVien // Danh sách liên kết đơn Sinh viên
{
    SinhVien info;
    DanhSachSinhVien *next;
};

typedef DanhSachSinhVien *PtrSV;

void KhoiTao_PtrSV(PtrSV &First) // Khởi tạo danh sách liên kết SV
{
    First = NULL;
}

/*

(some functions here)

*/

#endif
/////////////////////////////////////////