// L?p h?c v� danh s�ch l?p h?c
/////////////////////////////////////////
#include <iostream>
#include "SinhVien.h"

#ifndef DANH_SACH_LOP_HOC
#define DANH_SACH_LOP_HOC

#define MaxOfClasses 500

struct LopHoc
{
    char maLop[16];
    char tenLop[51];
    char nienKhoa[5];
    PtrSV First;
};

struct DanhSachLopHoc // m?ng con tr?
{
    int n=0;
    LopHoc *nodes[MaxOfClasses];
};

typedef DanhSachLopHoc ListLH;

/*

(some functions here)

*/

#endif
/////////////////////////////////////////
