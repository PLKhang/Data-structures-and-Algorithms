#ifndef DANH_SACH_CAU_HOI
#define DANH_SACH_CAU_HOI

#pragma once
#include <iostream>

struct CauHoi
{
    char ID[16];
    char maMonHoc[16];
    unsigned short answer;                      // 1 || 2 || 3 || 4
    char ans1[100], ans2[100], ans3[100], ans4[100], question[200];

};

struct nodeCauHoi 
{
    CauHoi info; //key = info.ID;
    nodeCauHoi* left;
    nodeCauHoi* right;
};

typedef nodeCauHoi* STreeCH;

void KhoiTao_STreeCH(STreeCH& root)
{
    root = NULL;
}

/*

(some functions here)

*/

#endif
