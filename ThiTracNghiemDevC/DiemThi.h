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

bool is_Empty_DT(PtrDT &first);

void insert_First_DT(PtrDT &first, DiemThi x);
void insert_Last_DT(PtrDT &first, DiemThi x);
void insert_After_DT(PtrDT p, DiemThi x);

void delete_First_DT(PtrDT &first);
void delete_Last_DT(PtrDT &first);
void delete_After_DT(PtrDT &first, PtrDT p);

void search_info_DT(PtrDT first, DiemThi x);

#endif
/////////////////////////////////////////