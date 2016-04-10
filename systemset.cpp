//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "systemset.h"
#include <inifiles.hpp>
#include "dm.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSysset *frmSysset;
//---------------------------------------------------------------------------
__fastcall TfrmSysset::TfrmSysset(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSysset::BitBtn2Click(TObject *Sender)
{
    Close();

}
//---------------------------------------------------------------------------
void __fastcall TfrmSysset::FormCreate(TObject *Sender)
{
//
    LoadParams();

}
//---------------------------------------------------------------------------
void __fastcall TfrmSysset::NumKeyPress(TObject *Sender, char &Key)
{
//
    if(isdigit(Key)||Key ==8 || Key==13||Key=='.'){
        ;
    }else
        Key=0;

}


void TfrmSysset::LoadParams(){
    AnsiString strinifile =dmd->configfile;
    TIniFile *pcfg = new TIniFile(strinifile);
    edtSensor25->Text = pcfg->ReadString("spce params","sensor25","0").Trim();
    edtSensor50->Text = pcfg->ReadString("spce params","sensor50","0").Trim();
    edtSensor80->Text = pcfg->ReadString("spce params","sensor80","0").Trim();

    edtDiff25->Text =pcfg->ReadString("spce params","diff25","0").Trim();
    edtDiff50->Text =pcfg->ReadString("spce params","diff50","0").Trim();
    edtDiff80->Text =pcfg->ReadString("spce params","diff80","0").Trim();

    edtSpeed25->Text =pcfg->ReadString("spce params","reqspeed25","0").Trim();
    edtSpeed50->Text =pcfg->ReadString("spce params","reqspeed50","0").Trim();
    edtSpeed80->Text =pcfg->ReadString("spce params","reqspeed80","0").Trim();

    edtGas25->Text =pcfg->ReadString("spce params","gas25","0").Trim();
    edtGas50->Text =pcfg->ReadString("spce params","gas50","0").Trim();
    edtGas80->Text =pcfg->ReadString("spce params","gas80","0").Trim();

    cbComPort->ItemIndex = pcfg->ReadInteger("rs-comm","port",1)-1;


    delete pcfg;

}
void __fastcall TfrmSysset::BitBtn3Click(TObject *Sender)
{
    LoadParams();    
}
//---------------------------------------------------------------------------
void check(TEdit *edit){
    edit->Text.Trim();
    try{
        edit->Text.ToDouble();
    }catch(...){
        edit->Text="0";
    }


}

//---------------------------------------------------------------------------

void __fastcall TfrmSysset::BitBtn1Click(TObject *Sender)
{
//
    check(edtSensor25);
    check(edtSensor50);
    check(edtSensor80);

    check(edtDiff25);
    check(edtDiff50);
    check(edtDiff80);

    check(edtSpeed25);
    check(edtSpeed50);
    check(edtSpeed80);

    check(edtGas25);
    check(edtGas50);
    check(edtGas80);

    AnsiString strinifile =dmd->configfile;;
    TIniFile *pcfg = new TIniFile(strinifile);
    pcfg->WriteFloat("spce params","sensor25",edtSensor25->Text.ToDouble());
    pcfg->WriteFloat("spce params","sensor50",edtSensor50->Text.ToDouble());
    pcfg->WriteFloat("spce params","sensor80",edtSensor80->Text.ToDouble());

    pcfg->WriteFloat("spce params","diff25",edtDiff25->Text.ToDouble());
    pcfg->WriteFloat("spce params","diff50",edtDiff50->Text.ToDouble());
    pcfg->WriteFloat("spce params","diff80",edtDiff80->Text.ToDouble());

    pcfg->WriteFloat("spce params","reqspeed25",edtSpeed25->Text.ToDouble());
    pcfg->WriteFloat("spce params","reqspeed50",edtSpeed50->Text.ToDouble());
    pcfg->WriteFloat("spce params","reqspeed80",edtSpeed80->Text.ToDouble());

    pcfg->WriteFloat("spce params","gas25",edtGas25->Text.ToDouble());
    pcfg->WriteFloat("spce params","gas50",edtGas50->Text.ToDouble());
    pcfg->WriteFloat("spce params","gas80",edtGas80->Text.ToDouble());

    pcfg->WriteInteger("rs-comm","port",this->cbComPort->ItemIndex+1);


    delete pcfg;

    dmd->comm_port = cbComPort->ItemIndex+1;
    
}
//---------------------------------------------------------------------------

