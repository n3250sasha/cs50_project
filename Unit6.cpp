//---------------------------------------------------------------------------

#include <vcl.h>
#include <mmsystem.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

int i=1;
void zk(int i)
{

                Form6->Image1->Picture->LoadFromFile("image/"+IntToStr(i)+".bmp");
                Form6->Image2->Picture->LoadFromFile("image/"+IntToStr(i+1)+".bmp");
                Form6->Image3->Picture->LoadFromFile("image/"+IntToStr(i+2)+".bmp");
                Form6->Image4->Picture->LoadFromFile("image/"+IntToStr(i+3)+".bmp");
                Form6->Image5->Picture->LoadFromFile("image/"+IntToStr(i+4)+".bmp");

}

void lb(int i)
{
        if ( i==1 )
        {
                Form6->Label1->Caption="Bag   -    ��������";
                Form6->Label2->Caption="Black   -   ������";
                Form6->Label3->Caption="Book   -   �����";
                Form6->Label4->Caption="Boot   -   �������";
                Form6->Label5->Caption="Box   -   �������";
        }
        else
        if ( i==2 )
        {
                Form6->Label1->Caption="Fox   -    ���";
                Form6->Label2->Caption="Left   -   �������";
                Form6->Label3->Caption="Pen   -   �����";
                Form6->Label4->Caption="Pencil   -   �����";
                Form6->Label5->Caption="Clock - ��������";
        }
        else
        if ( i==3 )
        {
               Form6->Label1->Caption="Bus   -   �������";
               Form6->Label2->Caption="Flag   -    ������";
               Form6->Label3->Caption="Run   -   �����";
               Form6->Label4->Caption="Rat   -   �����";
               Form6->Label5->Caption="Squirrel   -   �����";

        }
         else
        if ( i==4 )
        {
               Form6->Label1->Caption="Window   -   ³���";
               Form6->Label2->Caption="Rabbit   -    ������";
               Form6->Label3->Caption="Room   -   ʳ�����";
               Form6->Label4->Caption="Sit   -   �����";
               Form6->Label5->Caption="Spoon   -   �����";

        }

}

void lb1(int i)
{
        if ( i==1 )
        {
                Form6->Label1->Caption="Clap   -    �������";
                Form6->Label2->Caption="Dance   -   ������";
                Form6->Label3->Caption="Cup   -   �����";
                Form6->Label4->Caption="Desk   -   ���";
                Form6->Label5->Caption="Diary   -   ��������";
        }
        else
        if ( i==2 )
        {
                Form6->Label1->Caption="Dress   -    �����";
                Form6->Label2->Caption="Fat   -   ������";
                Form6->Label3->Caption="Jam   -   �������";
                Form6->Label4->Caption="Kitten - ������";
                Form6->Label5->Caption="Mat   -   �����";
        }
        else
        if ( i==3 )
        {
               Form6->Label1->Caption="Not   -    ͳ";
               Form6->Label2->Caption="Red   -   ��������";
               Form6->Label3->Caption="Shelf   -   ������";
               Form6->Label4->Caption="Shop   -   �������";
               Form6->Label5->Caption="Sing   -   ������";

        }
         else
        if ( i==4 )
        {
               Form6->Label1->Caption="Six   -    س���";
               Form6->Label2->Caption="Stick   -   ������";
               Form6->Label3->Caption="Text   -   �����";
               Form6->Label4->Caption="We   -   ��";
               Form6->Label5->Caption="Zoo   -   �������";

        }

}
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn3Click(TObject *Sender)
{
        if (RadioButton1->Checked)
        {
                if (i==1)
                PlaySound("voice/1.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/6.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/11.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/16.wav",0,SND_ASYNC);
        }
        else
        if (RadioButton2->Checked)
        {
                if (i==1)
                PlaySound("voice/21.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/26.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/31.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/36.wav",0,SND_ASYNC);
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn5Click(TObject *Sender)
{
        if (RadioButton1->Checked)
        {
                if (i==1)
                PlaySound("voice/2.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/7.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/12.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/17.wav",0,SND_ASYNC);
        }
        else
        if (RadioButton2->Checked)
        {
                if (i==1)
                PlaySound("voice/23.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/27.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/32.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/37.wav",0,SND_ASYNC);
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn6Click(TObject *Sender)
{
        if (RadioButton1->Checked)
        {
                if (i==1)
                PlaySound("voice/3.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/8.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/13.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/18.wav",0,SND_ASYNC);
        }
        if (RadioButton2->Checked)
        {
                if (i==1)
                PlaySound("voice/22.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/28.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/33.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/38.wav",0,SND_ASYNC);
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn7Click(TObject *Sender)
{
        if (RadioButton1->Checked)
        {
                if (i==1)
                PlaySound("voice/4.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/9.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/14.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/19.wav",0,SND_ASYNC);
        }
        if (RadioButton2->Checked)
        {
                if (i==1)
                PlaySound("voice/24.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/29.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/34.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/39.wav",0,SND_ASYNC);
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn8Click(TObject *Sender)
{
        if (RadioButton1->Checked)
        {
                if (i==1)
                PlaySound("voice/5.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/10.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/15.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/20.wav",0,SND_ASYNC);
        }
        if (RadioButton2->Checked)
        {
                if (i==1)
                PlaySound("voice/25.wav",0,SND_ASYNC);
                else
                if (i==2)
                PlaySound("voice/30.wav",0,SND_ASYNC);
                else
                if (i==3)
                PlaySound("voice/35.wav",0,SND_ASYNC);
                else
                if (i==4)
                PlaySound("voice/40.wav",0,SND_ASYNC);
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::RadioButton1Click(TObject *Sender)
{
        i=1;
        zk(i);
        lb(i);        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::RadioButton2Click(TObject *Sender)
{
        i=1;
        zk(i+20);
        lb1(i);        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn2Click(TObject *Sender)
{
        ++i;
        if (i>4)
        {
                 i=4;
        }
       switch(i)
       {
                case 1 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i);
                                lb(i);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+20);
                                lb1(i);
                        }
                };break;
                case 2 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i+4);
                                lb(i);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+24);
                                lb1(i);
                        }

                };break;
                case 3:
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i+8);
                                lb(i);
                        }
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+28);
                                lb1(i);
                        }
                break;
                case 4:
                        {
                                if (Form6->RadioButton1->Checked)
                                {
                                        zk(i+12);
                                        lb(i);
                                }
                                if (Form6->RadioButton2->Checked)
                                {
                                        zk(i+32);
                                        lb1(i);
                                }
                        }
                break;


       }

}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
        --i;
        if (i<1) i=1;
        switch(i)
       {
                case 1 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i);
                                lb(i);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+20);
                                lb1(i);
                        }
                };break;
                case 2 :
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i+4);
                                lb(i);
                        }
                        else
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+24);
                                lb1(i);
                        }

                };break;
                case 3:
                {
                        if (Form6->RadioButton1->Checked)
                        {
                                zk(i+8);
                                lb(i);
                        }
                        if (Form6->RadioButton2->Checked)
                        {
                                zk(i+28);
                                lb1(i);
                        }
                }
                break;
                case 4:
                        {
                                if (Form6->RadioButton1->Checked)
                                {
                                        zk(i+12);
                                        lb(i);
                                }
                                if (Form6->RadioButton2->Checked)
                                {
                                        zk(i+32);
                                        lb1(i);
                                }
                        }
                break;


       }

}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn4Click(TObject *Sender)
{
        Form6->Hide();
        Form1->Show();        
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn9Click(TObject *Sender)
{
        Form7->Show();
        Form6->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormActivate(TObject *Sender)
{
        if(RadioButton1->Checked)
        {
                zk(i);
                lb(i);
        }
        else
        if (RadioButton2->Checked)
        {
                zk(i+20);
                lb1(i);
        }
}
//---------------------------------------------------------------------------

