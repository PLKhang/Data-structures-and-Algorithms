#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<string>
using namespace std;
void gotoxy(short x,short y);
void TextColor(int color) ;
void SetBGColor(WORD color);
void VeKhung(int x1,int y1,int x2,int y2,int mau_nen,int loai_khung);
string NhapMa(int x,int y);
string NhapChuoi(int x,int y);
int NhapSo(int x,int y);
bool ThongBao1(int x,int y,string noidung,int thong_bao);