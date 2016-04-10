//---------------------------------------------------------------------------

#ifndef selbasicH
#define selbasicH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmSel : public TForm
{
__published:	// IDE-managed Components
    TDataSource *DataSource1;
    TADOQuery *query;
    TDBGrid *DBGrid1;
    TPanel *Panel1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    void __fastcall FormKeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid1DblClick(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
    AnsiString *pselitem,filtertype;
public:		// User declarations
    void GetSelEntry(AnsiString * cotent,AnsiString FiterType);

    __fastcall TfrmSel(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSel *frmSel;
//---------------------------------------------------------------------------
#endif
