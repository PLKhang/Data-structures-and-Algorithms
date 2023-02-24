// Câu hỏi và danh sách câu hỏi
/////////////////////////////////////////
#include <iostream>

#ifndef DANH_SACH_CAU_HOI
#define DANH_SACH_CAU_HOI

struct CauHoi
{
    int ID;
    char maMonHoc[16];
    unsigned short answer;                      // 1 || 2 || 3 || 4
    char ans1[100]; // câu hỏi & 4 đáp án
    char ans2[100];
    char ans3[100];
    char ans4[100];
    char question[200];
};

struct DanhSachCauHoi // cây nhị phân tìm kiếm
{
    CauHoi info; //key = info.ID;
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