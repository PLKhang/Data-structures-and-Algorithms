// �i?m thi & danh s�ch di?m thi
/////////////////////////////////////////
#ifndef DANH_SACH_DIEM_THI
#define DANH_SACH_DIEM_THI

#include <iostream>

struct DiemThi
{
    char maMonHoc[16];
    float diemThi;
};

struct nodeDiemThi // Danh s�ch li�n k?t don �i?m thi
{
    DiemThi info;
    nodeDiemThi *next;
};

typedef nodeDiemThi *PtrDT;

void KhoiTao_PtrDT(PtrDT &First)
{
    First = NULL;
}

bool is_Empty_DT(PtrDT &first);

void insert_First_DT(PtrDT &first, DiemThi x);
void insert_Last_DT(PtrDT &first, DiemThi x);
void insert_After_DT(PtrDT p, DiemThi x); //s? d?ng thu?ng xuy�n hon v� m�n h?c d� du?c s?p x?p t? tru?c

void delete_First_DT(PtrDT &first);
void delete_Last_DT(PtrDT &first);
void delete_After_DT(PtrDT &first, PtrDT p);
void clear_List_DT(PtrDT &first);

int search_info_DT(PtrDT first, DiemThi x);

void print_List_DT(PtrDT first);

#endif
/////////////////////////////////////////
