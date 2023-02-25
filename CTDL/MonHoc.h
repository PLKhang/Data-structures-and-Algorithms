// Môn h?c và Danh sách môn h?c
/////////////////////////////////////////
#ifndef DANH_SACH_MON_HOC
#define DANH_SACH_MON_HOC

#define MaxOfSubjects 300

struct MonHoc
{
    char maMonHoc[16];
    char tenMonHoc[51];
};

struct DanhSachMonHoc // m?ng con tr?
{
    int n = 0;
    MonHoc nodes[MaxOfSubjects];
};

typedef DanhSachMonHoc ListMH;

/*

(some functions here)

*/

#endif
/////////////////////////////////////////
