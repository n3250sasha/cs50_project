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
		if(StrToInt(InputBox("Введення паролю для початку нової гри", "Введіть пароль",0))==123)
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

        //задача №1
        if (z==1)
        {
                p=11-kp;
                v=(100*kp)/11;
                if(v<60) Label1->Caption=Label1->Caption + "Ви не впоралися!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "Молодець, але ти можеш \n краще!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "Молодець!!! \n";
        }
        else
        // Задача № 2
         if (z==2)
        {
                p=16-kp;
                v=(100*kp)/16;
                if(v<60) Label1->Caption=Label1->Caption + "Ви не впоралися!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "Молодець, але ти можеш \n краще!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "Молодець!!! \n";
        }
        else
        //Задача № 3
         if (z==3)
        {
                p=9-kp;
                v=(100*kp)/9;
                if(v<60) Label1->Caption=Label1->Caption + "Ви не впоралися!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "Молодець, але ти можеш \n краще!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "Молодець!!! \n";
        }
        else
        // Задача № 4
         if (z==4)
        {
                p=14-kp;
                v=(100*kp)/14;
                if(v<60) Label1->Caption=Label1->Caption + "Ви не впоралися!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "Молодець, але ти можеш \n краще!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "Молодець!!! \n";
        }
        else
        // Задача № 5
         if (z==5)
        {
                p=13-kp;
                v=(100*kp)/13;
                if(v<60) Label1->Caption=Label1->Caption + "Ви не впоралися!!! \n";
                else
                if ( (v>60) && (v<90)) Label1->Caption=Label1->Caption + "Молодець, але ти можеш \n краще!!! \n";
                else
                if(v>=90) Label1->Caption=Label1->Caption + "Молодець!!! \n";
        }

        Label1->Caption=Label1->Caption + " Допущено " +IntToStr(p) + " помилок " + "\n" +  "Витрачений час " + IntToStr(mp) + " : " + IntToStr(s);

}
//---------------------------------------------------------------------------



