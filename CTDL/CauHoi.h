// Câu h?i và danh sách câu h?i
/////////////////////////////////////////
#include <iostream>

#ifndef DANH_SACH_CAU_HOI
#define DANH_SACH_CAU_HOI

struct CauHoi
{
    char ID[16];
    char maMonHoc[16];
    unsigned short answer;                      // 1 || 2 || 3 || 4
    // char *ans1, *ans2, *ans3, *ans4, *question; // câu h?i & 4 dáp án
    char ans1[100], ans2[100], ans3[100], ans4[100], question[200]; // câu h?i & 4 dáp án

};

struct nodeCauHoi // cây nh? phân tìm ki?m
{
    CauHoi info; //key = info.ID;
    nodeCauHoi *left;
    nodeCauHoi *right;


    
};

typedef nodeCauHoi *STreeCH;

void KhoiTao_STreeCH(STreeCH &root)
{
    root = NULL;
}

/*

(some functions here)

*/

#endif
/////////////////////////////////////////
