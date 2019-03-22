//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn9;
        TBitBtn *BitBtn4;
        TImage *Image6;
        TLabel *Label5;
        TLabel *Label4;
        TLabel *Label3;
        TLabel *Label2;
        TLabel *Label1;
        TImage *Image5;
        TImage *Image4;
        TImage *Image3;
        TImage *Image2;
        TImage *Image1;
        TBitBtn *BitBtn8;
        TBitBtn *BitBtn7;
        TBitBtn *BitBtn6;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn3;
        TLabel *Label6;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TBevel *Bevel4;
        TBevel *Bevel5;
        TBevel *Bevel1;
        TBevel *Bevel6;
        TBevel *Bevel7;
        TBevel *Bevel8;
        TBevel *Bevel9;
        TBevel *Bevel10;
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
        void __fastcall BitBtn7Click(TObject *Sender);
        void __fastcall BitBtn8Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn9Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
