#include "DiemThi.h"

void insert_First_DT(PtrDT &first, DiemThi x)
{
    if (is_Empty_DT(first))
        return;

    PtrDT p = new nodeDiemThi;

    p->info = x;
    p->next = first;
    first = p;
}

void insert_After_DT(PtrDT p, DiemThi x)
{
    if (p == NULL)
        return;
    PtrDT q = new nodeDiemThi;
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

void clear_List_DT(PtrDT &first){
    while(first != NULL){
        delete_First_DT(first);
    }
}
