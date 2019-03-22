//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int m,n,nsd,a,b,k;

int nod(int a, int b)
{
        if (a%b!=0)
        {
                return nod(b, a%b);
        }
        else
        {
                return b;
        }
}

int noc(int n, int m)
{
       Form3->Label3->Caption=Form3->Label3->Caption + "[ " + IntToStr(a) + " * " + IntToStr(b)+ " ] / ���( " +IntToStr(a)+ " , " + IntToStr(b) + " ) = " + IntToStr(a/nod(a,b)*b)+ "   ";
       Form3->Label3->Caption=Form3->Label3->Caption +  "\n";

       return a/nod(a,b)*b;
}

int vuzn(int n, int m)
{

 if((n==0) || (m==0))
 {
        Form2->Label4->Caption="������ ��� ����� ������ �� 0";
        Form2->Label5->Caption="";
 }
 else
 {
      a=n;
      b=m;
      // nayb spiln dilnuk
        while (n!=m)
        {
                if (n>m)
                {
                        Form3->Label1->Caption=Form3->Label1->Caption + IntToStr(n) + " - " + IntToStr(m) + " = " + IntToStr(n-m) + "\n";
                        n=n-m;
                }
                else
                {
                        Form3->Label1->Caption=Form3->Label1->Caption + IntToStr(m) + " - " + IntToStr(n) + " = " + IntToStr(m-n) + "\n";
                        m=m-n;
                }
        }
        nsd=n;


        k=noc(n,m);

     }
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N6Click(TObject *Sender)
{
Button2->Click();
CheckBox1->Checked=false;
Form3->Hide();
Form1->Visible=true;
Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
        n=StrToInt(Form2->Edit1->Text);
        m=StrToInt(Form2->Edit2->Text);



        Form3->Label1->Caption="";
        Form3->Label3->Caption="";




        
        if ((n>0) && (m>0))
        {
        vuzn(n,m);
                Form2->Label4->Caption="���     ( "+ IntToStr(a)+ "," + IntToStr(b)+ " ) " + " = " +  IntToStr(k);
                Form2->Label5->Caption="���     [ "+ IntToStr(a)+ "," + IntToStr(b)+ " ] " + " = " +  IntToStr(nsd);
        }
        else
        {
                Form2->Label4->Caption="������ ��� ����'���� �����";
                Form2->Label5->Caption="";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
        Form3->Label1->Caption="";
        Form3->Label3->Caption="";
        Form2->Label4->Caption="";
        Form2->Label5->Caption="";
        Form2->Edit1->Text="1";
        Form2->Edit2->Text="1";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
        randomize();
        Edit1->Text=StrToInt(random(10)+1);
        Edit2->Text=StrToInt(random(10)+1);
        Button2->Enabled=false;
        CheckBox1->Visible=false;
        Edit1->Enabled=false;
        Edit2->Enabled=false;
        UpDown1->Enabled=false;
        UpDown2->Enabled=false;
        Form2->Width=736;

        // ���������
        Label12->Visible=false;
        Label4->Visible=false;
        Label5->Visible=false;
        Bevel2->Visible=false;

        // ������ �������� ��� � ���
        Label6->Visible=true;
        Label7->Visible=true;
        Label8->Visible=true;
        Label9->Visible=true;
        Edit3->Visible=true;
        Edit4->Visible=true;
        Button4->Visible=true;
        Button5->Visible=true;
        Button6->Visible=true;


        Form3->Hide();
        CheckBox1->Checked=false;
        Button3->Enabled=false;        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
        Form3->Label1->Caption="";
        Form3->Label3->Caption="";

        n=StrToInt(Form2->Edit1->Text);
        m=StrToInt(Form2->Edit2->Text);
        n=abs(n);
        m=abs(m);

        vuzn(n,m);

        if (Edit3->Text==k)
        {
                Label8->Caption="³���!";
        }
        else
        {
                Label8->Caption="�� ����!";
        }

        if (Edit4->Text==nsd)
        {
                Label9->Caption="³���!";
        }
        else
        {
                Label9->Caption="�� ����!";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
        Edit1->Text=StrToInt(random(10)+1);
        Edit2->Text=StrToInt(random(10)+1);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button6Click(TObject *Sender)
{

        // ���������
        Label12->Visible=true;
        Label4->Visible=true;
        Label5->Visible=true;
        Bevel2->Visible=true;

        // ������ �������� ��� � ���
        Label6->Visible=false;
        Label7->Visible=false;
        Label8->Visible=false;
        Label9->Visible=false;
        Edit3->Visible=false;
        Edit4->Visible=false;
        Button4->Visible=false;
        Button5->Visible=false;
        Button6->Visible=false;


        Button2->Enabled=true;
        Edit1->Enabled=true;
        Edit2->Enabled=true;
        UpDown1->Enabled=true;
        UpDown2->Enabled=true;
        CheckBox1->Visible=true;
        
        Button3->Enabled=true;
        Form2->Width=460;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked)
        {
                Form3->Show();
        }
        else
        if (CheckBox1->Checked==false)
        {
                Form3->Hide();
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
Form2->Width=460;        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::N3Click(TObject *Sender)
{
        Button1->Click();        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::N4Click(TObject *Sender)
{
        Button2->Click();        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::N5Click(TObject *Sender)
{
        Button3->Click();        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::N7Click(TObject *Sender)
{
MessageDlg("�������� �������� ������ �.�.",mtInformation, TMsgDlgButtons() << mbOK,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
        Button2->Click();
        CheckBox1->Checked=false;
        Form3->Hide();
        Form2->Hide();
        Form1->Visible=true;
}
//---------------------------------------------------------------------------
