// Câu hỏi và danh sách câu hỏi
/////////////////////////////////////////
#include <iostream>

#ifndef DANH_SACH_CAU_HOI
#define DANH_SACH_CAU_HOI

struct CauHoi
{
    char ID[16];
    char maMonHoc[16];
    unsigned short answer;                      // 1 || 2 || 3 || 4
    char *ans1, *ans2, *ans3, *ans4, *question; // câu hỏi & 4 đáp án
};

struct DanhSachCauHoi // cây nhị phân tìm kiếm
{
    CauHoi key;
    CauHoi info;
    DanhSachCauHoi *left;
    DanhSachCauHoi *right;
};

typedef DanhSachCauHoi *STreeCH;

void KhoiTao_STreeCH(STreeCH &root)
{
    root = NULL;
}

/*

(some functions here)

*/

#endif
/////////////////////////////////////////