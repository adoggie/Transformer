//---------------------------------------------------------------------
#include <vcl.h>

#pragma hdrstop
#include "rpOut.h"
#include "dm.h"
#include "main.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
Tfrmrpt *frmrpt;
//---------------------------------------------------------------------
__fastcall Tfrmrpt::Tfrmrpt(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------



void __fastcall Tfrmrpt::FormCreate(TObject *Sender)
{
         
    AnsiString sql ;
    AnsiString val;
    sql = "SELECT * FROM TEST WHERE ID="+AnsiString(recid);
    qry->Close();
    qry->SQL->Text =sql;

    qry->Open();

    if(qry->RecordCount!=1){
        return ;
    }

//-----------------------------------
//ÏÔÊ¾Ö¸¶¨¼ÇÂ¼
   // QRDBText1->Caption = qry->FieldByName("RADIUS")->AsInteger;
    QRLabel96->Caption = qry->FieldByName("PS")->AsString;
    QRLabel97->Caption = qry->FieldByName("DEVNAME")->AsString;
    QRLabel98->Caption = qry->FieldByName("DEVCAPABILITY")->AsString;
    QRLabel99->Caption = qry->FieldByName("CONSINGUNIT")->AsString;
    QRLabel100->Caption = qry->FieldByName("PRODUCTNO")->AsString;
    QRLabel101->Caption = qry->FieldByName("SPEC")->AsString;
    QRLabel102->Caption =qry->FieldByName("PROVIDER")->AsString;
    
    val = qry->FieldByName("PRODUCTSPEC1")->AsString;
    if((bool)FindSection(val,0).ToInt())
        QRLabel88->Caption ="¡Á";
    else
        QRLabel88->Caption ="";

    if((bool)FindSection(val,1).ToInt())
        QRLabel89->Caption ="¡Á";
    else
        QRLabel89->Caption ="";
 //--------------------------------------------
    val = qry->FieldByName("PRODUCTSPEC2")->AsString;

    if((bool)FindSection(val,0).ToInt())    QRLabel53->Caption ="¡Á";
    else    QRLabel53->Caption ="";
    if((bool)FindSection(val,1).ToInt())    QRLabel84->Caption ="¡Á";
    else    QRLabel84->Caption ="";
    if((bool)FindSection(val,2).ToInt())    QRLabel85->Caption ="¡Á";
    else    QRLabel85->Caption ="";
    if((bool)FindSection(val,3).ToInt())    QRLabel64->Caption ="¡Á";
    else    QRLabel64->Caption ="";
    if((bool)FindSection(val,4).ToInt())    QRLabel90->Caption ="¡Á";
    else    QRLabel90->Caption ="";
    if((bool)FindSection(val,5).ToInt())    QRLabel86->Caption ="¡Á";
    else    QRLabel86->Caption ="";
/*
    QRLabel53->Visible = (bool)FindSection(val,0).ToInt();
    QRLabel84->Visible = (bool)FindSection(val,1).ToInt();
    QRLabel85->Visible = (bool)FindSection(val,2).ToInt();
    QRLabel64->Visible = (bool)FindSection(val,3).ToInt();
    QRLabel90->Visible = (bool)FindSection(val,4).ToInt();
    QRLabel86->Visible = (bool)FindSection(val,5).ToInt();
*/    
//-------------------------------------------------------------

     QRMemo1->Lines->Text =qry->FieldByName("CONCLUSION")->AsString;

    QRLabel130->Caption =qry->FieldByName("TEMPERATURE")->AsString;
    QRLabel131->Caption = qry->FieldByName("WET")->AsString;
    QRLabel127->Caption = qry->FieldByName("TESTER")->AsString;
    QRLabel128->Caption =  qry->FieldByName("CHARGE")->AsString;

    TDateTime dt =qry->FieldByName("OPTTIME")->AsDateTime;
    QRLabel129->Caption = dt.DateString();

    val =qry->FieldByName("VERIFY_JDQ_STEP1")->AsString;
    QRLabel103->Caption = FindSection(val,0);
    QRLabel104->Caption = FindSection(val,1);
    QRLabel105->Caption = FindSection(val,2);
    QRLabel106->Caption = FindSection(val,3);

    val = qry->FieldByName("VERIFY_JDQ_STEP2")->AsString;
    QRLabel108->Caption = FindSection(val,0);
    QRLabel109->Caption = FindSection(val,1);
    QRLabel110->Caption = FindSection(val,2);
    QRLabel107->Caption = FindSection(val,3);

    val = qry->FieldByName("VERIFY_JDQ_STEP3")->AsString;
    QRLabel112->Caption = FindSection(val,0);
    QRLabel113->Caption = FindSection(val,1);
    QRLabel114->Caption = FindSection(val,2);
    QRLabel111->Caption = FindSection(val,3);

    val = qry->FieldByName("JY_GT300")->AsString;
    QRLabel116->Caption = FindSection(val,0);
    QRLabel117->Caption = FindSection(val,1);
    QRLabel118->Caption = FindSection(val,2);
    QRLabel115->Caption = FindSection(val,3);

    val = qry->FieldByName("JY_2000")->AsString;
    QRLabel120->Caption = (FindSection(val,0)=="1"?"»÷´©":"²»»÷´©");
    QRLabel121->Caption = (FindSection(val,1)=="1"?"»÷´©":"²»»÷´©");
    QRLabel122->Caption = (FindSection(val,2)=="1"?"»÷´©":"²»»÷´©");
    QRLabel119->Caption = (FindSection(val,3)=="1"?"»÷´©":"²»»÷´©");

    val = qry->FieldByName("MF")->AsString;
    QRLabel124->Caption = (FindSection(val,0)=="1"?"ÊÇ":"·ñ");
    QRLabel125->Caption = (FindSection(val,1)=="1"?"ÊÇ":"·ñ");
    QRLabel126->Caption = (FindSection(val,2)=="1"?"ÊÇ":"·ñ");
    QRLabel123->Caption = (FindSection(val,3)=="1"?"ÊÇ":"·ñ");

}
//---------------------------------------------------------------------------


