// Môn học và Danh sách môn học
/////////////////////////////////////////
#ifndef DANH_SACH_MON_HOC
#define DANH_SACH_MON_HOC

#define MaxOfSubjects 300

struct MonHoc
{
    char maMonHoc[16];
    char tenMonHoc[51];
};

struct DanhSachMonHoc // mảng con trỏ
{
    int n{0};
    MonHoc *nodes[MaxOfSubjects];
};

typedef DanhSachMonHoc ListMH;

/*

(some functions here)

*/

#endif
/////////////////////////////////////////