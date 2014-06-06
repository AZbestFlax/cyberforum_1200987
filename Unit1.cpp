//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
void tok(char x[], int size, char* min, char* max)
{
	char *X;
	X=strtok(x, " ");
	min=max=X;
	do
	{
		if (strlen(X)<strlen(min))
		min=X;
		if (strlen(X)>strlen(max))
		max=X;
	} while (X=strtok(NULL," "));

	Form1->ledSmall->Text=min; //������ � ������ ����������� �����
	Form1->ledBig->Text=max;   //������ � ������ ������������ �����
}
//---------------------------------------------------------------------------
// ����� ���� �������� ������� ����� ����������� ���� ������
void inp(char x[]) {
	wchar_t *wc=(Form1->ledS->Text).c_str(); // UnicodeString � wchar_t*
	wcstombs(x, wc, wcslen(wc)+1);           // wchar_t* � char*
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if (ledS->Text!="") {
		char x[100];
		char *max=NULL, *min=NULL;
		inp(x);
		int size=strlen(x);
		tok(x, size, min, max);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if (ledS->Text=="") ledS->Color = clRed; // ��� �����������, ���� ������ ������
											 // ��� ����������)
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	ledS->Color = clWhite;
}
//---------------------------------------------------------------------------
