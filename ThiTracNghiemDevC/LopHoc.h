// Lớp học và danh sách lớp học
/////////////////////////////////////////
#include <iostream>
#include "SinhVien.h"

#ifndef DANH_SACH_LOP_HOC
#define DANH_SACH_LOP_HOC

#define MaxOfClasses 500

struct LopHoc
{
    char maLop[16];
    char tenLop[16];
    char nienKhoa[5];
    PtrSV First;
};

struct DanhSachLopHoc // mảng con trỏ
{
    int n{0};
    LopHoc *nodes[MaxOfClasses];
};

typedef DanhSachLopHoc ListLH;

/*

(some functions here)

*/

#endif
/////////////////////////////////////////