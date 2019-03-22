//---------------------------------------------------------------------------

#include <vcl.h>
#include <algorithm>
#pragma hdrstop

#include "Unit7.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
int j=0,k7=0, a3[3]={32, 176, 320};;
AnsiString sl[]={"","Bag","Black","Book","Boot","Box","Fox","Left","Pen","Pencil","Clock","Bus","Flag","Run","Rat","Squirrel","Window","Rabbit","Room","Sit","Spoon"};
AnsiString sl1[]={"","Clap","Dance","Cup","Desk","Diary","Dress","Fat","Jam","Kitten","Mat","Not","Red","Shelf","Shop","Sing","Six","Stick","Text","We","Zoo"};
void lk(int j)
{

                Form7->Image1->Picture->LoadFromFile("image/"+IntToStr(j)+".bmp");
                Form7->Image2->Picture->LoadFromFile("image/"+IntToStr(j+1)+".bmp");
                Form7->Image3->Picture->LoadFromFile("image/"+IntToStr(j+2)+".bmp");
                Form7->Image4->Picture->LoadFromFile("image/"+IntToStr(j+3)+".bmp");
                Form7->Image5->Picture->LoadFromFile("image/"+IntToStr(j+4)+".bmp");
                Form7->Image6->Picture->LoadFromFile("image/"+IntToStr(j+5)+".bmp");

}
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::BitBtn2Click(TObject *Sender)
{
        Label2->Caption="";

RadioButton1->Visible=true;
RadioButton2->Visible=true;
RadioButton3->Visible=true;
RadioButton4->Visible=true;
RadioButton5->Visible=true;
RadioButton6->Visible=true;

RadioButton1->Checked=false;
RadioButton2->Checked=false;
RadioButton3->Checked=false;
RadioButton4->Checked=false;
RadioButton5->Checked=false;
RadioButton6->Checked=false;

RadioButton1->Enabled=true;
RadioButton2->Enabled=true;
RadioButton3->Enabled=true;
RadioButton4->Enabled=true;
RadioButton5->Enabled=true;
RadioButton6->Enabled=true;



             randomize();
             std::random_shuffle(a3, a3+3);
             Image1->Left=a3[0];
             Image2->Left=a3[1];
             Image3->Left=a3[2];
             RadioButton1->Left=a3[0];
             RadioButton2->Left=a3[1];
             RadioButton3->Left=a3[2];

             std::random_shuffle(a3, a3+3);
             Image4->Left=a3[0];
             Image5->Left=a3[1];
             Image6->Left=a3[2];
             RadioButton4->Left=a3[0];
             RadioButton5->Left=a3[1];
             RadioButton6->Left=a3[2];

        ++j;


       switch(j)
       {
                case 1 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j);

                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+20);
                        }
                };break;
                case 2 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-1);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+19);
                        }
                };break;
                case 3 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-2);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+18);
                        }
                };break;
                case 4 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-3);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+17);
                        }
                };break;
                case 5 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-4);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+16);
                        }
                };break;
                case 6 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-5);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+15);
                        }
                };break;
                case 7 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+20);
                        }
                };break;
                case 8 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-1);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+19);
                        }
                };break;
                case 9 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-2);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+18);
                        }
                };break;
                case 10 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-3);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+17);
                        }
                };break;
                case 11 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-4);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+16);
                        }
                };break;
                case 12 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-5);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+15);
                        }
                };break;
                case 13 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+20);
                        }
                };break;
                case 14 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-1);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+19);
                        }
                };break;
                case 15 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-2);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+18);
                        }
                };break;
                case 16 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-3);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+17);
                        }
                };break;
                case 17 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-4);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+16);
                        }
                };break;
                case 18 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-5);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+15);
                        }
                };break;
                case 19 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-4);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+16);
                        }
                };break;
                case 20 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                Label1->Caption=sl[j];
                                lk(j-5);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                Label1->Caption=sl1[j];
                                lk(j+15);
                        }
                };break;
                default:
                {

                 Image1->Picture->Bitmap=NULL;
                 Image2->Picture->Bitmap=NULL;
                 Image3->Picture->Bitmap=NULL;
                 Image4->Picture->Bitmap=NULL;
                 Image5->Picture->Bitmap=NULL;
                 Image6->Picture->Bitmap=NULL;

                 RadioButton1->Visible=false;
                 RadioButton2->Visible=false;
                 RadioButton3->Visible=false;
                 RadioButton4->Visible=false;
                 RadioButton5->Visible=false;
                 RadioButton6->Visible=false;

                 Bevel1->Visible=false;
                 Bevel2->Visible=false;

                 Label1->Caption="";
                 Label2->Caption="Кількість правильних \n відповідей - " +  IntToStr(k7);

                 j=0;
                 k7=0;
                }

       }
}
//---------------------------------------------------------------------------
void __fastcall TForm7::BitBtn3Click(TObject *Sender)
{
        Form6->Show();
        Form6->RadioButton1->Checked;
        Form7->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::N3Click(TObject *Sender)
{
         Form6->Show();
        Form6->RadioButton1->Checked;
        Form7->Hide();        
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form6->Show();
        Form6->RadioButton1->Checked;
        Form7->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton1Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ( (j==1) || (j==7) || (j==13) )
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton2Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ((j==2) || (j==8) || (j==14) )
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton3Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ((j==3) || (j==9) || (j==15))
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton4Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ((j==4) || (j==10) || (j==16))
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton5Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ((j==5) || (j==11) || (j==17) || (j==19))
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton6Click(TObject *Sender)
{
        RadioButton1->Enabled=false;
        RadioButton2->Enabled=false;
        RadioButton3->Enabled=false;
        RadioButton4->Enabled=false;
        RadioButton5->Enabled=false;
        RadioButton6->Enabled=false;

        if ((j==6) || (j==12) || (j==18) || (j==20))
        k7++;
        Label4->Caption=IntToStr(k7);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormActivate(TObject *Sender)
{
         Bevel1->Visible=true;
         Bevel2->Visible=true;
        BitBtn2->Click();
        Label1->Transparent=true;
        j=0;
        k7=0;
        BitBtn2->Click();
        
}
//---------------------------------------------------------------------------
