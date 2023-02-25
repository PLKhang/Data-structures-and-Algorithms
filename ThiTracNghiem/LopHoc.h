#ifndef DANH_SACH_LOP_HOC
#define DANH_SACH_LOP_HOC

#pragma once
#include <iostream>
#include "SinhVien.h"

#define MaxOfClasses 500

struct LopHoc
{
    char maLop[16];
    char tenLop[51];
    char nienKhoa[11];
    PtrSV First;
};

struct DanhSachLopHoc // m?ng con tr?
{
    int n = 0;
    LopHoc* nodes[MaxOfClasses];
};

typedef DanhSachLopHoc ListLH;

/*

(some functions here)

*/

#endif
