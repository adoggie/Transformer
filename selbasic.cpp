//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "selbasic.h"
#include "dm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSel *frmSel;
//---------------------------------------------------------------------------
__fastcall TfrmSel::TfrmSel(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TfrmSel::GetSelEntry(AnsiString * pcontent,AnsiString FiterType){

    pselitem = pcontent;
    filtertype = FiterType;
    
    ShowModal();

}


void __fastcall TfrmSel::FormKeyPress(TObject *Sender, char &Key)
{

    if(Key==13){ // enter
       DBGrid1DblClick(NULL); 
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmSel::DBGrid1DblClick(TObject *Sender)
{
//
    if(query->RecordCount ==0)  return;

    *pselitem = query->FieldByName("NAME")->AsString;

    Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSel::FormShow(TObject *Sender)
{
    AnsiString sql;
    sql = "SELECT NAME FROM BASICINFO WHERE TYPE='"+filtertype+"' ORDER BY NAME";
    query->SQL->Text =  sql;
    query->Open();    
}
//---------------------------------------------------------------------------

