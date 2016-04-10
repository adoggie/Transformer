//---------------------------------------------------------------------------

#ifndef systemsetH
#define systemsetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmSysset : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TEdit *edtSensor25;
    TEdit *edtSpeed25;
    TEdit *edtDiff25;
    TEdit *edtGas25;
    TGroupBox *GroupBox2;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TEdit *edtSensor50;
    TEdit *edtSpeed50;
    TEdit *edtDiff50;
    TEdit *edtGas50;
    TGroupBox *GroupBox3;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TEdit *edtSensor80;
    TEdit *edtSpeed80;
    TEdit *edtDiff80;
    TEdit *edtGas80;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TBitBtn *BitBtn3;
    TComboBox *cbComPort;
    TLabel *Label13;
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void  __fastcall NumKeyPress(TObject *Sender, char &Key);
    void __fastcall BitBtn3Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);

private:	// User declarations
    void LoadParams();
public:		// User declarations
    __fastcall TfrmSysset(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSysset *frmSysset;
//---------------------------------------------------------------------------
#endif
