//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image11;
        TLabel *Label3;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TLabel *Label1;
        TImage *Image6;
        TImage *Image5;
        TImage *Image4;
        TImage *Image3;
        TImage *Image2;
        TImage *Image1;
        TRadioButton *RadioButton6;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton1;
        TLabel *Label2;
        TLabel *Label4;
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall RadioButton6Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
