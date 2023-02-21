// Điểm thi & danh sách điểm thi
/////////////////////////////////////////
#include <iostream>

#ifndef DANH_SACH_DIEM_THI
#define DANH_SACH_DIEM_THI

struct DiemThi
{
    char maMonHoc[16];
    float diemThi;
};

struct DanhSachDiemThi // Danh sách liên kết đơn Điểm thi
{
    DiemThi info;
    DanhSachDiemThi *next;
};

typedef DanhSachDiemThi *PtrDT;

void KhoiTao_PtrDT(PtrDT &First)
{
    First = NULL;
}

/*

(some functions here)

*/

#endif
/////////////////////////////////////////