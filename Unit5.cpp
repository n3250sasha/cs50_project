//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
extern int kp,z,s,mp;
int p,v;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
	int pass = 0;
	while (pass <= 0) {
		if(StrToInt(InputBox("�������� ������ ��� ������� ���� ���", "������ ������",0))==123)
		{
			Form4->Enabled=true;
			Form5->Hide();
			Form4->N2->Click();
			pass++;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender)
{

        //������ �1
        if (z==1)
        {
                p=11-kp;
                v=(100*kp)/11;
                if(v<60) Label1->Caption=Label1->Caption + "�� �� ���������!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "��������, ��� �� ����� \n �����!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "��������!!! \n";
        }
        else
        // ������ � 2
         if (z==2)
        {
                p=16-kp;
                v=(100*kp)/16;
                if(v<60) Label1->Caption=Label1->Caption + "�� �� ���������!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "��������, ��� �� ����� \n �����!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "��������!!! \n";
        }
        else
        //������ � 3
         if (z==3)
        {
                p=9-kp;
                v=(100*kp)/9;
                if(v<60) Label1->Caption=Label1->Caption + "�� �� ���������!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "��������, ��� �� ����� \n �����!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "��������!!! \n";
        }
        else
        // ������ � 4
         if (z==4)
        {
                p=14-kp;
                v=(100*kp)/14;
                if(v<60) Label1->Caption=Label1->Caption + "�� �� ���������!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "��������, ��� �� ����� \n �����!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "��������!!! \n";
        }
        else
        // ������ � 5
         if (z==5)
        {
                p=13-kp;
                v=(100*kp)/13;
                if(v<60) Label1->Caption=Label1->Caption + "�� �� ���������!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "��������, ��� �� ����� \n �����!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "��������!!! \n";
        }

        Label1->Caption=Label1->Caption + " �������� " +IntToStr(p) + " ������� " + "\n" +  "���������� ��� " + IntToStr(mp) + " : " + IntToStr(s);

}
//---------------------------------------------------------------------------



