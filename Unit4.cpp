//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <vector>
#include <algorithm>
#include <functional>
#pragma hdrstop
using namespace std;

#include "Unit4.h"
#include "Unit1.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
TImage *muvi;
int x,y,mx,my,kp=0;
int s=0,mp=0;
int z,zadacha[5]={1,2,3,4,5};
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
        DoubleBuffered=true;
        x=Image1->Left;
        y=Image1->Top;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form4->Hide();
        Form1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::N3Click(TObject *Sender)
{
        Form4->Hide();
        Form1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::N2Click(TObject *Sender)
{
s=0,mp=0;
CheckBox1->Visible=true;
Image1->Visible=true;
Image2->Visible=true;
Image3->Visible=true;
Image4->Visible=true;
Image5->Visible=true;
Image6->Visible=true;
Image7->Visible=true;
Image8->Visible=true;
Image9->Visible=true;
Image10->Visible=true;
Image11->Visible=true;
Image12->Visible=true;
Image13->Visible=true;
Image14->Visible=true;
Image15->Visible=true;
Image16->Visible=true;
Image17->Visible=true;
Image18->Visible=true;
Image19->Visible=true;
Image20->Visible=true;
Image21->Visible=true;
Image22->Visible=true;
Image23->Visible=true;
Image24->Visible=true;
Image25->Visible=true;
Image26->Visible=true;
Image27->Visible=true;
Image28->Visible=true;
Image29->Visible=true;
Image30->Visible=true;
Image31->Visible=true;
Image32->Visible=true;
Image33->Visible=true;
Image34->Visible=true;
Image35->Visible=true;
Image36->Visible=true;
Image37->Visible=true;
Image38->Visible=true;
Image39->Visible=true;
Image40->Visible=true;
Image41->Visible=true;
Image42->Visible=true;
Image43->Visible=true;
Image44->Visible=true;
Image45->Visible=true;
Image46->Visible=true;
Image47->Visible=true;
Image48->Visible=true;
Image49->Visible=true;
Image50->Visible=true;
Image51->Visible=true;
Image52->Visible=true;
Image53->Visible=true;
Image54->Visible=true;
Image55->Visible=true;
Image56->Visible=true;
Image57->Visible=true;
Image58->Visible=true;
Image59->Visible=true;
Image60->Visible=true;
Image61->Visible=true;

// ������������ ������ �� �� ������� ������������ ��������
Image1->Picture->LoadFromFile("tp/1.jpg");
Image2->Picture->LoadFromFile("tp/2.jpg");
Image3->Picture->LoadFromFile("tp/3.jpg");
Image4->Picture->LoadFromFile("tp/4.jpg");
Image5->Picture->LoadFromFile("tp/5.jpg");
Image6->Picture->LoadFromFile("tp/6.jpg");
Image7->Picture->LoadFromFile("tp/7.jpg");
Image8->Picture->LoadFromFile("tp/8.jpg");
Image9->Picture->LoadFromFile("tp/9.jpg");
Image10->Picture->LoadFromFile("tp/10.jpg");
Image11->Picture->LoadFromFile("tp/11.jpg");
Image12->Picture->LoadFromFile("tp/12.jpg");
Image13->Picture->LoadFromFile("tp/13.jpg");
Image14->Picture->LoadFromFile("tp/14.jpg");
Image15->Picture->LoadFromFile("tp/15.jpg");
Image16->Picture->LoadFromFile("tp/16.jpg");
Image17->Picture->LoadFromFile("tp/17.jpg");
Image18->Picture->LoadFromFile("tp/18.jpg");
Image19->Picture->LoadFromFile("tp/19.jpg");
Image20->Picture->LoadFromFile("tp/20.jpg");
Image21->Picture->LoadFromFile("tp/21.jpg");
Image22->Picture->LoadFromFile("tp/22.jpg");

CheckBox1->Checked=false;

        randomize();
        // ������� 1
        int i,a2[11]={72,112,152,192,232,272,312,352,392,432,472};

                std::random_shuffle(a2, a2+11);

                Image23->Top=a2[0];   Image23->Left=568;
                Image24->Top=a2[1];   Image24->Left=568;
                Image25->Top=a2[2];   Image25->Left=568;
                Image26->Top=a2[3];   Image26->Left=568;
                Image27->Top=a2[4];   Image27->Left=568;
                Image28->Top=a2[5];   Image28->Left=568;
                Image29->Top=a2[6];   Image29->Left=568;
                Image30->Top=a2[7];   Image30->Left=568;
                Image31->Top=a2[8];   Image31->Left=568;
                Image32->Top=a2[9];   Image32->Left=568;
                Image33->Top=a2[10];  Image33->Left=568;
        // ������� 2

                Image34->Top=a2[0];   Image34->Left=768;
                Image35->Top=a2[1];   Image35->Left=768;
                Image36->Top=a2[2];   Image36->Left=768;
                Image37->Top=a2[3];   Image37->Left=768;
                Image38->Top=a2[4];   Image38->Left=768;
                Image39->Top=a2[5];   Image39->Left=768;
                Image40->Top=a2[6];   Image40->Left=768;
                Image41->Top=a2[7];   Image41->Left=768;
                Image42->Top=a2[8];   Image42->Left=768;
                Image43->Top=a2[9];   Image43->Left=768;
                Image44->Top=a2[10];  Image44->Left=768;

        // ������� 3

                Image45->Top=a2[0];   Image45->Left=968;
                Image46->Top=a2[1];   Image46->Left=968;
                Image47->Top=a2[2];   Image47->Left=968;
                Image48->Top=a2[3];   Image48->Left=968;
                Image49->Top=a2[4];   Image49->Left=968;
                Image50->Top=a2[5];   Image50->Left=968;
                Image51->Top=a2[6];   Image51->Left=968;
                Image52->Top=a2[7];   Image52->Left=968;
                Image53->Top=a2[8];   Image53->Left=968;
                Image54->Top=a2[9];   Image54->Left=968;
                Image55->Top=a2[10];  Image55->Left=968;

        // ������� �����
        int b[3]={568,768,968};
        std::random_shuffle(b, b+3);
                Image56->Left=b[0];   Image56->Top=32;
                Image57->Left=b[1];   Image57->Top=32;
                Image58->Left=b[2];   Image58->Top=32;

        // ������ �����
        Image59->Left=b[0];   Image59->Top=512;
        Image60->Left=b[1];   Image60->Top=512;
        Image61->Left=b[2];   Image61->Top=512;

        // ���� ������ ���������� �����
        random_shuffle(zadacha,zadacha+5);
        z=zadacha[0];
        if (z==1)
        {
                Label1->Caption="�������� �������� ��� ����������� ������� ���� �����.";
        }
        else
        if (z==2)
        {
                Label1->Caption="�������� �������� ��� ���������� ������� ���� �����.";
        }
        else
        if (z==3)
        {
                Label1->Caption="�������� ��������� ��� ���������� ��'��� ���.";
        }
        else
        if (z==4)
        {
                Label1->Caption="�������� �������� ��� ����������� ����� ���������� �� �������� ������.";
        }
        else
        if (z==5)
        {
                Label1->Caption="�������� �������� ��� ���������� ���������� �������������" "\n ������ � 5 ��������.";
        }

        Form4->Timer1->Enabled=true;
        kp=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Image23MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        mx=X;
        my=Y;        
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Image23MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
  muvi = ((TImage*)Sender);
     if(Shift.Contains(ssLeft))
     {  muvi->Left += X-mx; muvi->Top += Y-my;  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
Timer1->Enabled=false;
Form5->Label1->Caption="";
        
        // �������� ����������� ���� ������������
        // program
        if (Image23->Top>=0 && Image23->Top<=35 && Image23->Left>=-15 && Image23->Left<=25) kp++;
        else
        {
                Image1->Picture->Bitmap=NULL;
                Image1->Canvas->Brush->Color=clRed;
                Image1->Canvas->Rectangle(0,0,185,30);
        }
        // begin
        if (Image25->Top>=95 && Image25->Top<=135 && Image23->Left>=-15 && Image25->Left<=25) kp++;
         else
        {
                Image3->Picture->Bitmap=NULL;
                Image3->Canvas->Brush->Color=clRed;
                Image3->Canvas->Rectangle(0,0,185,30);
        }


        // �������� ����������� ������ � 1
        if (z==1)
        {
                if (Image24->Top>=45 && Image24->Top<=85 && Image23->Left>=-15 && Image24->Left<=25) kp++;
                else
                {
                        Image2->Picture->Bitmap=NULL;
                        Image2->Canvas->Brush->Color=clRed;
                        Image2->Canvas->Rectangle(0,0,185,30);
                }
                if (Image26->Top>=143 && Image26->Top<=178 && Image23->Left>=-15 && Image26->Left<=25) kp++;
                else
                {
                        Image4->Picture->Bitmap=NULL;
                        Image4->Canvas->Brush->Color=clRed;
                        Image4->Canvas->Rectangle(0,0,185,30);
                }
                if (Image27->Top>=190 && Image27->Top<=230 && Image23->Left>=-15 && Image27->Left<=25) kp++;
                else
                {
                        Image5->Picture->Bitmap=NULL;
                        Image5->Canvas->Brush->Color=clRed;
                        Image5->Canvas->Rectangle(0,0,185,30);
                }
                if (Image28->Top>=238 && Image28->Top<=278 && Image23->Left>=-15 && Image28->Left<=25) kp++;
                else
                {
                        Image6->Picture->Bitmap=NULL;
                        Image6->Canvas->Brush->Color=clRed;
                        Image6->Canvas->Rectangle(0,0,185,30);
                }
                if (Image29->Top>=286 && Image29->Top<=326 && Image23->Left>=-15 && Image29->Left<=25) kp++;
                else
                {
                        Image7->Picture->Bitmap=NULL;
                        Image7->Canvas->Brush->Color=clRed;
                        Image7->Canvas->Rectangle(0,0,185,30);
                }
                if (Image30->Top>=334 && Image30->Top<=374 && Image23->Left>=-15 && Image30->Left<=25) kp++;
                else
                {
                        Image8->Picture->Bitmap=NULL;
                        Image8->Canvas->Brush->Color=clRed;
                        Image8->Canvas->Rectangle(0,0,185,30);
                }
                if (Image31->Top>=382 && Image31->Top<=422 && Image23->Left>=-15 && Image31->Left<=25) kp++;
                else
                {
                        Image9->Picture->Bitmap=NULL;
                        Image9->Canvas->Brush->Color=clRed;
                        Image9->Canvas->Rectangle(0,0,185,30);
                }
                //readln
                if (Image32->Top>=430 && Image32->Top<=470 && Image23->Left>=-15 && Image32->Left<=25) kp++;
                else
                {
                        Image10->Picture->Bitmap=NULL;
                        Image10->Canvas->Brush->Color=clRed;
                        Image10->Canvas->Rectangle(0,0,185,30);
                }
                //end.
                if (Image33->Top>=478 && Image33->Top<=523 && Image23->Left>=-15 && Image33->Left<=25) kp++;
                else
                {
                        Image11->Picture->Bitmap=NULL;
                        Image11->Canvas->Brush->Color=clRed;
                        Image11->Canvas->Rectangle(0,0,185,30);
                }
                Image12->Visible=false;
                Image13->Visible=false;
                Image14->Visible=false;
                Image15->Visible=false;
                Image16->Visible=false;
                Image17->Visible=false;
                Image18->Visible=false;
                Image19->Visible=false;
                Image20->Visible=false;
                Image21->Visible=false;
                Image22->Visible=false;


        }
        else
        if (z==2)
        {
                // �������� ������ � 3
                // Var a,b:integer
                if (Image34->Top>=45 && Image34->Top<=85 && Image33->Left>=-15 && Image34->Left<=25) kp++;
                else
                {
                        Image2->Picture->Bitmap=NULL;
                        Image2->Canvas->Brush->Color=clRed;
                        Image2->Canvas->Rectangle(0,0,185,30);
                }
                // write(a)
                if (Image26->Top>=143 && Image26->Top<=178 && Image23->Left>=-15 && Image26->Left<=25) kp++;
                else
                {
                        Image4->Picture->Bitmap=NULL;
                        Image4->Canvas->Brush->Color=clRed;
                        Image4->Canvas->Rectangle(0,0,185,30);
                }
                //radln(a)
                if (Image27->Top>=190 && Image27->Top<=230 && Image23->Left>=-15 && Image27->Left<=25) kp++;
                else
                {
                        Image5->Picture->Bitmap=NULL;
                        Image5->Canvas->Brush->Color=clRed;
                        Image5->Canvas->Rectangle(0,0,185,30);
                }
                // write(b)
                if (Image28->Top>=238 && Image28->Top<=278 && Image23->Left>=-15 && Image28->Left<=25) kp++;
                else
                {
                        Image6->Picture->Bitmap=NULL;
                        Image6->Canvas->Brush->Color=clRed;
                        Image6->Canvas->Rectangle(0,0,185,30);
                }
                // readln(b)
                if (Image29->Top>=286 && Image29->Top<=326 && Image23->Left>=-15 && Image29->Left<=25) kp++;
                else
                {
                        Image7->Picture->Bitmap=NULL;
                        Image7->Canvas->Brush->Color=clRed;
                        Image7->Canvas->Rectangle(0,0,185,30);
                }
                // if (a mod 2 = 0) then
                if (Image35->Top>=334 && Image35->Top<=374 && Image35->Left>=-15 && Image35->Left<=25) kp++;
                else
                {
                        Image8->Picture->Bitmap=NULL;
                        Image8->Canvas->Brush->Color=clRed;
                        Image8->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln ('parne a')
                if (Image36->Top>=382 && Image36->Top<=422 && Image26->Left>=-15 && Image36->Left<=25) kp++;
                else
                {
                        Image9->Picture->Bitmap=NULL;
                        Image9->Canvas->Brush->Color=clRed;
                        Image9->Canvas->Rectangle(0,0,185,30);
                }
                //else
                if (Image37->Top>=430 && Image37->Top<=470 && Image37->Left>=-15 && Image37->Left<=25) kp++;
                else
                {
                        Image10->Picture->Bitmap=NULL;
                        Image10->Canvas->Brush->Color=clRed;
                        Image10->Canvas->Rectangle(0,0,185,30);
                }
                // if (b mod 2 = 0) then
                if (Image38->Top>=478 && Image38->Top<=523 && Image38->Left>=-15 && Image38->Left<=25) kp++;
                else
                {
                        Image11->Picture->Bitmap=NULL;
                        Image11->Canvas->Brush->Color=clRed;
                        Image11->Canvas->Rectangle(0,0,185,30);
                }
                //  writeln('paraleln b')
                if (Image39->Top>=0 && Image39->Top<=35 && Image39->Left>=290 && Image39->Left<=335) kp++;
                else
                {
                        Image12->Picture->Bitmap=NULL;
                        Image12->Canvas->Brush->Color=clRed;
                        Image12->Canvas->Rectangle(0,0,185,30);
                }
                // else
                if (Image40->Top>=46 && Image40->Top<=91 && Image40->Left>=290 && Image40->Left<=335) kp++;
                else
                {
                        Image13->Picture->Bitmap=NULL;
                        Image13->Canvas->Brush->Color=clRed;
                        Image13->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln ('nema parnuh')
                if (Image41->Top>=94 && Image41->Top<=139 && Image41->Left>=290 && Image41->Left<=335) kp++;
                else
                {
                        Image14->Picture->Bitmap=NULL;
                        Image14->Canvas->Brush->Color=clRed;
                        Image14->Canvas->Rectangle(0,0,185,30);
                }
                //readln
                if (Image32->Top>=142 && Image32->Top<=187 && Image32->Left>=290 && Image32->Left<=335) kp++;
                else
                {
                        Image15->Picture->Bitmap=NULL;
                        Image15->Canvas->Brush->Color=clRed;
                        Image15->Canvas->Rectangle(0,0,185,30);
                }
                // end
                if (Image33->Top>=190 && Image33->Top<=235 && Image33->Left>=290 && Image33->Left<=335) kp++;
                else
                {
                        Image16->Picture->Bitmap=NULL;
                        Image16->Canvas->Brush->Color=clRed;
                        Image16->Canvas->Rectangle(0,0,185,30);
                }
                Image17->Visible=false;
                Image18->Visible=false;
                Image19->Visible=false;
                Image20->Visible=false;
                Image21->Visible=false;
                Image22->Visible=false;
        }
        else
        // �������� ������ � 3
        if (z==3)
        {
                // Var r,V:real;
                if (Image42->Top>=46 && Image42->Top<=86 && Image42->Left>=-10 && Image42->Left<=25) kp++;
                else
                {
                        Image2->Picture->Bitmap=NULL;
                        Image2->Canvas->Brush->Color=clRed;
                        Image2->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln ('vvedit radius');
                if (Image43->Top>=142 && Image43->Top<=177 && Image43->Left>=-10 && Image43->Left<=25) kp++;
                else
                {
                        Image4->Picture->Bitmap=NULL;
                        Image4->Canvas->Brush->Color=clRed;
                        Image4->Canvas->Rectangle(0,0,185,30);
                }
                // Raedln (r);
                if (Image44->Top>=190 && Image44->Top<=225 && Image44->Left>=-10 && Image44->Left<=25) kp++;
                else
                {
                        Image5->Picture->Bitmap=NULL;
                        Image5->Canvas->Brush->Color=clRed;
                        Image5->Canvas->Rectangle(0,0,185,30);
                }
                // V=4/3*pi*r^3;
                if (Image45->Top>=238 && Image45->Top<=273 && Image45->Left>=-10 && Image45->Left<=25) kp++;
                else
                {
                        Image6->Picture->Bitmap=NULL;
                        Image6->Canvas->Brush->Color=clRed;
                        Image6->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln('V = ',V);
                if (Image46->Top>=286 && Image46->Top<=321 && Image46->Left>=-10 && Image46->Left<=25) kp++;
                else
                {
                        Image7->Picture->Bitmap=NULL;
                        Image7->Canvas->Brush->Color=clRed;
                        Image7->Canvas->Rectangle(0,0,185,30);
                }
                // readln;
                if (Image32->Top>=334 && Image32->Top<=370 && Image32->Left>=-10 && Image32->Left<=25) kp++;
                else
                {
                        Image8->Picture->Bitmap=NULL;
                        Image8->Canvas->Brush->Color=clRed;
                        Image8->Canvas->Rectangle(0,0,185,30);
                }
                // End.
                if (Image33->Top>=382 && Image33->Top<=417 && Image33->Left>=-10 && Image33->Left<=25) kp++;
                else
                {
                        Image9->Picture->Bitmap=NULL;
                        Image9->Canvas->Brush->Color=clRed;
                        Image9->Canvas->Rectangle(0,0,185,30);
                }
                Image10->Visible=false;
                Image11->Visible=false;
                Image12->Visible=false;
                Image13->Visible=false;
                Image14->Visible=false;
                Image15->Visible=false;
                Image16->Visible=false;
                Image17->Visible=false;
                Image18->Visible=false;
                Image19->Visible=false;
                Image20->Visible=false;
                Image21->Visible=false;
                Image22->Visible=false;
           }
           else
           // �������� ������ � 4
           if (z==4)
           {
                //Var
                if(Image47->Top>=46 && Image47->Top<=79 && Image47->Left>=-10 && Image47->Left<=25) kp++;
                else
                {
                        Image2->Picture->Bitmap=NULL;
                        Image2->Canvas->Brush->Color=clRed;
                        Image2->Canvas->Rectangle(0,0,185,30);
                }
                //Write(a);
                if (Image26->Top>=142 && Image26->Top<=177 && Image26->Left>=-10 && Image26->Left<=25) kp++;
                else
                {
                        Image4->Picture->Bitmap=NULL;
                        Image4->Canvas->Brush->Color=clRed;
                        Image4->Canvas->Rectangle(0,0,185,30);
                }
                //Readln(a);
                if (Image27->Top>=190 && Image27->Top<=225 && Image27->Left>=-10 && Image27->Left<=25) kp++;
                else
                {
                        Image5->Picture->Bitmap=NULL;
                        Image5->Canvas->Brush->Color=clRed;
                        Image5->Canvas->Rectangle(0,0,185,30);
                }
                // Write(b);
                if (Image28->Top>=238 && Image28->Top<=273 && Image28->Left>=-10 && Image28->Left<=25) kp++;
                else
                {
                        Image6->Picture->Bitmap=NULL;
                        Image6->Canvas->Brush->Color=clRed;
                        Image6->Canvas->Rectangle(0,0,185,30);
                }
                // Readln(b);
                if (Image29->Top>=286 && Image29->Top<=321 && Image29->Left>=-10 && Image29->Left<=25) kp++;
                else
                {
                        Image7->Picture->Bitmap=NULL;
                        Image7->Canvas->Brush->Color=clRed;
                        Image7->Canvas->Rectangle(0,0,185,30);
                }
                // Write (c);
                if (Image48->Top>=334 && Image48->Top<=370 && Image48->Left>=-10 && Image48->Left<=25) kp++;
                else
                {
                        Image8->Picture->Bitmap=NULL;
                        Image8->Canvas->Brush->Color=clRed;
                        Image8->Canvas->Rectangle(0,0,185,30);
                }
                //Readln(c);
                if (Image49->Top>=382 && Image49->Top<=417 && Image49->Left>=-10 && Image49->Left<=25) kp++;
                else
                {
                        Image9->Picture->Bitmap=NULL;
                        Image9->Canvas->Brush->Color=clRed;
                        Image9->Canvas->Rectangle(0,0,185,30);
                }
                // p=(a+b+c)/2
                if (Image50->Top>=430 && Image50->Top<=465 && Image50->Left>=-10 && Image50->Left<=25) kp++;
                else
                {
                        Image10->Picture->Bitmap=NULL;
                        Image10->Canvas->Brush->Color=clRed;
                        Image10->Canvas->Rectangle(0,0,185,30);
                }
                //s=sqrt(p*(p-a)(p-b)(p-c)
                if (Image51->Top>=478 && Image51->Top<=515 && Image51->Left>=-10 && Image51->Left<=25) kp++;
                else
                {
                        Image11->Picture->Bitmap=NULL;
                        Image11->Canvas->Brush->Color=clRed;
                        Image11->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln('s = ',s:6:2);
                if (Image52->Top>=0 && Image52->Top<=35 && Image52->Left>=290 && Image52->Left<=335) kp++;
                else
                {
                        Image12->Picture->Bitmap=NULL;
                        Image12->Canvas->Brush->Color=clRed;
                        Image12->Canvas->Rectangle(0,0,185,30);
                }
                // Readln;
                if (Image32->Top>=46 && Image32->Top<=81 && Image32->Left>=290 && Image32->Left<=335) kp++;
                else
                {
                        Image13->Picture->Bitmap=NULL;
                        Image13->Canvas->Brush->Color=clRed;
                        Image13->Canvas->Rectangle(0,0,185,30);
                }
                // End.
                if (Image33->Top>=94 && Image33->Top<=130 && Image33->Left>=290 && Image33->Left<=335) kp++;
                else
                {
                        Image14->Picture->Bitmap=NULL;
                        Image14->Canvas->Brush->Color=clRed;
                        Image14->Canvas->Rectangle(0,0,185,30);
                }
                Image15->Visible=false;
                Image16->Visible=false;
                Image17->Visible=false;
                Image18->Visible=false;
                Image19->Visible=false;
                Image20->Visible=false;
                Image21->Visible=false;
                Image22->Visible=false;
        }
        else
        //�������� ������ � 5
        if (z==5)
        {
                // Var a:array[1..5].......
                if (Image53->Top>=46 && Image53->Top<=80 && Image53->Left>=-10 && Image53->Left<=25) kp++;
                else
                {
                        Image2->Picture->Bitmap=NULL;
                        Image2->Canvas->Brush->Color=clRed;
                        Image2->Canvas->Rectangle(0,0,185,30);
                }
                // k=0
                if (Image54->Top>=142 && Image54->Top<=177 && Image54->Left>=-10 && Image54->Left<=25) kp++;
                else
                {
                        Image4->Picture->Bitmap=NULL;
                        Image4->Canvas->Brush->Color=clRed;
                        Image4->Canvas->Rectangle(0,0,185,30);
                }
                // for i:=1 to 5 do
                if (Image55->Top>=190 && Image55->Top<=225 && Image55->Left>=-10 && Image55->Left<=25) kp++;
                else
                {
                        Image5->Picture->Bitmap=NULL;
                        Image5->Canvas->Brush->Color=clRed;
                        Image5->Canvas->Rectangle(0,0,185,30);
                }
                // begin
                if (Image56->Top>=238 && Image56->Top<=273 && Image56->Left>=-10 && Image56->Left<=25) kp++;
                else
                {
                        Image6->Picture->Bitmap=NULL;
                        Image6->Canvas->Brush->Color=clRed;
                        Image6->Canvas->Rectangle(0,0,185,30);
                }
                // Readln(a[i]);
                if (Image57->Top>=286 && Image57->Top<=321 && Image57->Left>=-10 && Image57->Left<=25) kp++;
                else
                {
                        Image7->Picture->Bitmap=NULL;
                        Image7->Canvas->Brush->Color=clRed;
                        Image7->Canvas->Rectangle(0,0,185,30);
                }
                // sum:=sum+a[i];
                if (Image58->Top>=334 && Image58->Top<=370 && Image58->Left>=-10 && Image58->Left<=25) kp++;
                else
                {
                        Image8->Picture->Bitmap=NULL;
                        Image8->Canvas->Brush->Color=clRed;
                        Image8->Canvas->Rectangle(0,0,185,30);
                }
                // k:=k+1;
                if (Image59->Top>=382 && Image59->Top<=417 && Image59->Left>=-10 && Image59->Left<=25) kp++;
                else
                {
                        Image9->Picture->Bitmap=NULL;
                        Image9->Canvas->Brush->Color=clRed;
                        Image9->Canvas->Rectangle(0,0,185,30);
                }
                // End;
                if (Image60->Top>=430 && Image60->Top<=465 && Image60->Left>=-10 && Image60->Left<=25) kp++;
                else
                {
                        Image10->Picture->Bitmap=NULL;
                        Image10->Canvas->Brush->Color=clRed;
                        Image10->Canvas->Rectangle(0,0,185,30);
                }
                // Writeln('sa = ',sum/k:7:2);
                if (Image61->Top>=478 && Image61->Top<=515 && Image61->Left>=-10 && Image61->Left<=25) kp++;
                else
                {
                        Image11->Picture->Bitmap=NULL;
                        Image11->Canvas->Brush->Color=clRed;
                        Image11->Canvas->Rectangle(0,0,185,30);
                }
                // Readln;
                if (Image32->Top>=0 && Image32->Top<=35 && Image32->Left>=290 && Image32->Left<=335) kp++;
                else
                {
                        Image12->Picture->Bitmap=NULL;
                        Image12->Canvas->Brush->Color=clRed;
                        Image12->Canvas->Rectangle(0,0,185,30);
                }
                if (Image33->Top>=46 && Image33->Top<=80 && Image33->Left>=290 && Image33->Left<=335) kp++;
                else
                {
                        Image13->Picture->Bitmap=NULL;
                        Image13->Canvas->Brush->Color=clRed;
                        Image13->Canvas->Rectangle(0,0,185,30);
                }
                Image14->Visible=false;
                Image15->Visible=false;
                Image16->Visible=false;
                Image17->Visible=false;
                Image18->Visible=false;
                Image19->Visible=false;
                Image20->Visible=false;
                Image21->Visible=false;
                Image22->Visible=false;
        }

        Form5->Show();
        Form4->Enabled=false;
        MessageBeep(MB_ICONEXCLAMATION);        
}
//---------------------------------------------------------------------------
void __fastcall TForm4::CheckBox1Click(TObject *Sender)
{
        if (CheckBox1->Checked) {BitBtn1->Visible=true;}
        else
        {BitBtn1->Visible=false;}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
         s++;
        if (s==60)
        {
                mp++;
                s=0;
        }
        Label2->Caption=IntToStr(mp) + " : " + IntToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TForm4::N5Click(TObject *Sender)
{
MessageDlg("�������� �������� ������ �.�.",mtInformation, TMsgDlgButtons() << mbOK,0);
}
//---------------------------------------------------------------------------

