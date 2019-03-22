//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TCheckBox *CheckBox1;
        TImage *Image1;
        TLabel *Label2;
        TEdit *Edit1;
        TUpDown *UpDown1;
        TLabel *Label3;
        TEdit *Edit2;
        TUpDown *UpDown2;
        TLabel *Label10;
        TLabel *Label9;
        TLabel *Label8;
        TLabel *Label7;
        TLabel *Label6;
        TEdit *Edit4;
        TEdit *Edit3;
        TButton *Button6;
        TButton *Button5;
        TButton *Button4;
        TLabel *Label11;
        TLabel *Label5;
        TLabel *Label4;
        TLabel *Label12;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TBevel *Bevel3;
        void __fastcall N6Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
