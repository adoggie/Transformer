//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "search.h"
#include "dm.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSearch *frmSearch;
//---------------------------------------------------------------------------
__fastcall TfrmSearch::TfrmSearch(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSearch::FormCreate(TObject *Sender)
{
    cbDevRadius->ItemIndex =0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmSearch::BitBtn1Click(TObject *Sender)
{
//
    AnsiString sql,case1,case2;
    TDateTime dt = dt2->Date;
    dt+=1;
    sql = "SELECT * FROM TEST ";
    if(ckRadius->Checked){
        case1 = " WHERE ";
        case2 = " RADIUS='"+AnsiString(cbDevRadius->ItemIndex)+"' ";
        sql += case1+case2;
    }

    if(ckTime->Checked){
        //case1 = " WHERE ";

        if(ckRadius->Checked){
            sql +=" AND ";
        }else{
            sql +="  WHERE ";
        }
        case2 = " OPTTIME BETWEEN #"+dt1->DateTime.DateString()+\
        "# AND #" +dt.DateString()+"# ";
        sql +=case2;
    }

    query->Close();
    query->SQL->Text = sql;
    query->Open();
    

}
//---------------------------------------------------------------------------
void __fastcall TfrmSearch::queryAfterScroll(TDataSet *DataSet)
{
//

    frmMain->ShowOne(query->FieldByName("ID")->AsInteger);   
}
//---------------------------------------------------------------------------

void __fastcall TfrmSearch::queryradiusGetText(TField *Sender,
      AnsiString &Text, bool DisplayText)
{
    if(query->FieldByName("RADIUS")->AsString=="0")    Text="25";
    if(query->FieldByName("RADIUS")->AsString=="1")    Text="50";
    if(query->FieldByName("RADIUS")->AsString=="2")    Text="80";
    
}
//---------------------------------------------------------------------------



void __fastcall TfrmSearch::FormClose(TObject *Sender,
      TCloseAction &Action)
{
frmSearch=NULL;    
}
//---------------------------------------------------------------------------

