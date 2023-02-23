#include "DiemThi.h"

void insert_First_DT(PtrDT &first, DiemThi x)
{
    if (is_Empty_DT(first))
        return;

    PtrDT p = new DanhSachDiemThi;

    p->info = x;
    p->next = first;
    first = p;
}

void insert_After_DT(PtrDT p, DiemThi x)
{
    if (p == NULL)
        return;
    PtrDT q = new DanhSachDiemThi;
    q->info = x;
    q->next = p->next;
    p->next = q;
}

void delete_First_DT(PtrDT &first)
{
    if (is_Empty_DT(first))
        return;
    PtrDT p;
    p = first;
    first = p->next;
    delete p;
}

void detele_After_DT(PtrDT p)
{
    PtrDT q;
    if (p == NULL || p->next == NULL)
        return;
    q = p->next;
    p->next = q->next;
    delete q;
}

int search_info_DT(PtrDT first, DiemThi x)
{
    if (is_Empty_DT(first))
        return 0;

    int count = 0;
    if (first->info == x)
        count++;

    PtrDT p;
    for (p = first; p != NULL && p->next != NULL; p = p->next)
    {
        if (p->next->info == x)
            count++;
    }

    return count;
}

void clear_List_DT(PtrDT &first){
    while(first != NULL){
        delete_First_DT(first);
    }
}
