#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
//#include"ThuVien.cpp"
#include<string>
using namespace std;
void gotoxy(short x,short y);
void TextColor(int color) ;
void SetBGColor(WORD color);
void ClearScreen();
int wherex(void);
int wherey(void);
void Box(int x, int y,string nd);
void ToMau(int x,int y,int mau,string nd);
char GetKey();
int NhapSo(int x,int y);
string NhapChuoi(int x,int y);
void NhapMa();
void VeKhung();
void ThongBao();