//---------------------------------------------------------------------------

#ifndef searchH
#define searchH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <ADODB.hpp>
//---------------------------------------------------------------------------
class TfrmSearch : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TPanel *Panel2;
    TGroupBox *GroupBox1;
    TCheckBox *ckTime;
    TPanel *Panel3;
    TDateTimePicker *dt1;
    TLabel *Label1;
    TDateTimePicker *dt2;
    TComboBox *cbDevRadius;
    TCheckBox *ckRadius;
    TDataSource *DataSource1;
    TDBGrid *dg;
    TBitBtn *BitBtn1;
    TADOQuery *query;
    TAutoIncField *queryid;
    TWideStringField *queryradius;
    TWideStringField *queryps;
    TWideStringField *querydevname;
    TWideStringField *querydevcapability;
    TWideStringField *queryconsingunit;
    TWideStringField *queryproductno;
    TWideStringField *queryspec;
    TWideStringField *queryprovider;
    TWideStringField *queryproductspec1;
    TWideStringField *queryproductspec2;
    TWideStringField *queryconclusion;
    TWideStringField *querytemperature;
    TWideStringField *querywet;
    TWideStringField *querytester;
    TWideStringField *querycharge;
    TDateTimeField *queryopttime;
    TWideStringField *queryverify_jdq_step1;
    TWideStringField *queryverify_jdq_step2;
    TWideStringField *queryverify_jdq_step3;
    TWideStringField *queryjy_gt300;
    TWideStringField *queryjy_2000;
    TWideStringField *querymf;
    TBitBtn *BitBtn2;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall queryAfterScroll(TDataSet *DataSet);
    void __fastcall queryradiusGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSearch(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSearch *frmSearch;
//---------------------------------------------------------------------------
#endif
