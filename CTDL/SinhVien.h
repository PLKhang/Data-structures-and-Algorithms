// Sinh vi�n v� Danh s�ch sinh vi�n
/////////////////////////////////////////
#ifndef DANH_SACH_SINH_VIEN
#define DANH_SACH_SINH_VIEN

#include "DiemThi.h"

struct SinhVien
{
    char MSSV[11];
    char ho[51];
    char ten[16];
    char password[21];
    bool phai; // male: 0     female: 1
    PtrDT danhSachDiemThi;
};

struct nodeSinhVien // Danh s�ch li�n k?t don Sinh vi�n
{
    SinhVien info;
    nodeSinhVien *next;
};

typedef nodeSinhVien *PtrSV;

void KhoiTao_PtrSV(PtrSV &First) // Kh?i t?o danh s�ch li�n k?t SV
{
    First = NULL;
}

/*

(some functions here)

*/

#endif
/////////////////////////////////////////
