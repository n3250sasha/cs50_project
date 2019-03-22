//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TImage *Image62;
        TImage *Image1;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TImage *Image19;
        TImage *Image2;
        TImage *Image20;
        TImage *Image21;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TImage *Image29;
        TImage *Image3;
        TImage *Image30;
        TImage *Image31;
        TImage *Image32;
        TImage *Image33;
        TImage *Image34;
        TImage *Image35;
        TImage *Image36;
        TImage *Image37;
        TImage *Image38;
        TImage *Image39;
        TImage *Image4;
        TImage *Image40;
        TImage *Image41;
        TImage *Image42;
        TImage *Image43;
        TImage *Image44;
        TImage *Image45;
        TImage *Image46;
        TImage *Image47;
        TImage *Image48;
        TImage *Image49;
        TImage *Image5;
        TImage *Image50;
        TImage *Image51;
        TImage *Image52;
        TImage *Image53;
        TImage *Image54;
        TImage *Image55;
        TImage *Image56;
        TImage *Image57;
        TImage *Image58;
        TImage *Image59;
        TImage *Image6;
        TImage *Image60;
        TImage *Image61;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TLabel *Label1;
        TCheckBox *CheckBox1;
        TBitBtn *BitBtn1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TTimer *Timer1;
        TLabel *Label2;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall Image23MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Image23MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
