#include"ThuVien.h"
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void TextColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetBGColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void VeKhung(int x1, int y1,int x2,int y2,int mau_nen,int loai_khung) {
	if(loai_khung!=0)
	{
	for (int ix = x1+1; ix < x2; ix++) 
	{
		gotoxy(ix, y1);
		cout << char(196);
		gotoxy(ix, y2 );
		cout << char(196);
		if(loai_khung==2)
		{
		gotoxy(ix, y1+1);
		cout << char(196);
		gotoxy(ix, y2-1 );
		cout << char(196);	
		}
	}
	for (int iy = y1+1; iy < y2; iy++) 
	{
		gotoxy(x1, iy);
		cout << char(179);
		gotoxy(x2, iy);
		cout << char(179);
		if(loai_khung==2)
		{
		gotoxy(x1+1, iy);
		cout << char(179);
		gotoxy(x2-1, iy);
		cout << char(179);
		}
	}
	//Ve 4 goc vuong
	gotoxy(x1, y1); cout << char(218);
	gotoxy(x1, y2 ); cout << char(192);
	gotoxy(x2 , y1); cout << char(191);
	gotoxy(x2 , y2); cout << char(217);
	if(loai_khung==2)
	{
	gotoxy(x1+1, y1+1); cout << char(218);
	gotoxy(x1+1, y2-1 ); cout << char(192);
	gotoxy(x2-1 , y1+1); cout << char(191);
	gotoxy(x2-1 , y2-1); cout << char(217);
	}
	}
	///////////////////////////////////////////
	if(mau_nen!=-1)
	{
		int kt=1;
		if(loai_khung==2)kt=2;
		SetBGColor(mau_nen);
		for (int ix = x1+kt; ix <= x2-kt; ix++) 
		{
			for (int iy = y1+kt; iy <= y2-kt; iy++)
			{
				gotoxy(ix,iy);
				cout<<" ";
			}
		}
		SetBGColor(0);
	}
}
int NhapSo(int x, int y)// x va y la dia chi de hien ki tu vua nhap
{
    char so=getch();
	if(so>='0'&&so<='9')
	{
		gotoxy(x,y);
		cout<<so-'0';
		return so-'0';
	}
	else return -1;
}
string NhapChuoi(int x,int y)// x va y la dia chi de hien ki tu vua nhap
{
	char chuoi[51];
	int index=0;
	char ki_tu;
	while((ki_tu=getch())!=13&&index<51)
	{
	 if((ki_tu>='A'&&ki_tu<='Z')||(ki_tu>='a'&&ki_tu<='z')||(ki_tu==' '&&index!=0))
	 {
	 	if(ki_tu==32&&index>0&&chuoi[index-1]==32)continue;
		chuoi[index]=ki_tu;
		gotoxy(x+index,y);
		cout<<ki_tu;
		index++;
	 }
	 if(ki_tu==8&&index>0)
	 {
	 	index--;
		chuoi[index]='\0';
	 	gotoxy(x+index,y);
	    cout<<" ";	
	    gotoxy(x+index,y);
	 }
	}
	chuoi[index]='\0';
	return chuoi;
}
string NhapMa(int x,int y)
{
	char Ma[51],ki_tu;
	int index=0;
	while((ki_tu=getch())!=13&&index<51)
	{
		if(index==0&&((ki_tu>='0'&&ki_tu<='9')||ki_tu==' '))continue;
		if((ki_tu>='A'&&ki_tu<='Z')||(ki_tu>='a'&&ki_tu<='z')||(ki_tu>='0'&&ki_tu<='9')||ki_tu=='_')
		{
			Ma[index]=ki_tu;
			gotoxy(x+index,y);
			cout<<ki_tu;
			index++;
		}
		if(ki_tu==8&&index>0)
	    {
	 	index--;
		Ma[index]='\0';
	 	gotoxy(x+index,y);
	    cout<<" ";	
	    gotoxy(x+index,y);
	   }
	}
	Ma[index]='\0';
	return Ma;
}
bool ThongBao1(int x,int y,string noidung,int thong_bao,int loai)
{
	char ki_tu,vi_tri='t';
	int khoang_cach=1;
	if(loai==1)
	{
		VeKhung(x,y,x+50,y+4,3,0);
		khoang_cach=3;
	}
	else gotoxy(x+17,y);
	SetBGColor(3);
	cout<<noidung;
	if(thong_bao==0)
	{
		return false;
	}
	    gotoxy(x+20,y+khoang_cach);
	    SetBGColor(5);
	    cout<<"YES ";
	    SetBGColor(1);
	    cout<<"| NO";
	while((ki_tu=getch())!=13)
	{
		if(ki_tu==75)
		{
		gotoxy(x+20,y+khoang_cach);
	    SetBGColor(5);
	    cout<<"YES ";
	    SetBGColor(1);
	    cout<<"| NO";
		vi_tri='t';
		}
		if(ki_tu==77)
		{
		gotoxy(x+20,y+khoang_cach);
	    SetBGColor(1);
	    cout<<"YES ";
	    SetBGColor(5);
	    cout<<"| NO";
	    vi_tri='p';
		}
	}
	SetBGColor(0);
	if(vi_tri=='t')return true;
	else return false;
}