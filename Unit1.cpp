//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit6.h"
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

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
        Form2->Show();
        Form1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{

        Form1->Visible=false;
        Form4->Show();
        Form4->N2->Click();
        Form4->Timer1->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
        Form6->Show();
        Form1->Visible=false;
}
//---------------------------------------------------------------------------

