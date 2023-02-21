#include <iostream>

#define MaxOfSubjects 300
#define MaxOfClasses 500

using namespace std;

// Điểm thi & danh sách điểm thi
/////////////////////////////////////////
#ifndef DANH_SACH_DIEM_THI
#define DANH_SACH_DIEM_THI

struct DiemThi
{
    char maMonHoc[16];
    float diemThi;
};

struct DanhSachDiemThi // Danh sách liên kết đơn Điểm thi
{
    DiemThi info;
    DanhSachDiemThi *next;
};

typedef DanhSachDiemThi *PtrDT;

void KhoiTao_PtrDT(PtrDT &First)
{
    First = NULL;
}

#endif
/////////////////////////////////////////

// Sinh viên và Danh sách sinh viên
/////////////////////////////////////////
#ifndef DANH_SACH_SINH_VIEN
#define DANH_SACH_SINH_VIEN

struct SinhVien
{
    char MSSV[11];
    char ho[51];
    char ten[16];
    char password[21];
    bool phai; // male: 0     female: 1
    PtrDT danhSachDiemThi = NULL;
};

struct DanhSachSinhVien // Danh sách liên kết đơn Sinh viên
{
    SinhVien info;
    DanhSachSinhVien *next;
};

typedef DanhSachSinhVien *PtrSV;

void KhoiTao_PtrSV(PtrSV &First) // Khởi tạo danh sách liên kết SV
{
    First = NULL;
}

#endif
/////////////////////////////////////////

// Lớp học và danh sách lớp học
/////////////////////////////////////////
#ifndef DANH_SACH_LOP_HOC
#define DANH_SACH_LOP_HOC

struct LopHoc
{
    char maLop[16];
    char tenLop[51];
    char nienKhoa[11];
    PtrSV First = NULL;
};

struct DanhSachLopHoc // mảng con trỏ
{
    int n = 0;
    LopHoc *nodes[MaxOfClasses];
};

typedef DanhSachLopHoc ListLH;

#endif
/////////////////////////////////////////

// Môn học và Danh sách môn học
/////////////////////////////////////////
#ifndef DANH_SACH_MON_HOC
#define DANH_SACH_MON_HOC

struct MonHoc
{
    char maMonHoc[16];
    char tenMonHoc[51];
};

struct DanhSachMonHoc // cấp phát tĩnh
{
    int n = 0;
    MonHoc nodes[MaxOfSubjects];
};

typedef DanhSachMonHoc ListMH;

#endif
/////////////////////////////////////////

// Câu hỏi và danh sách câu hỏi
/////////////////////////////////////////
#ifndef DANH_SACH_CAU_HOI
#define DANH_SACH_CAU_HOI

struct CauHoi
{
    int ID;
    char maMonHoc[16];
    char answer;                       // A || B || C || D
    char ans1[100], ans2[100], ans3[100], ans4[100], question[100]; // câu hỏi & 4 đáp án
};

struct DanhSachCauHoi // cây nhị phân tìm kiếm
{
    // CauHoi key;
    CauHoi info;
    DanhSachCauHoi *left;
    DanhSachCauHoi *right;
};

typedef DanhSachCauHoi *STreeCH;

void KhoiTao_STreeCH(STreeCH &cauHoi)
{
    cauHoi = NULL;  
}

#endif
/////////////////////////////////////////

int main()
{
    STreeCH dsCHT = NULL;
    ListLH dsLOP;
    ListMH dsMON;
    cout << "Hello world!\n";

    return 0;
}