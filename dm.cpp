//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <inifiles.hpp>

#include "dm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tdmd *dmd;
//---------------------------------------------------------------------------
__fastcall Tdmd::Tdmd(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdmd::DataModuleCreate(TObject *Sender)
{
    //configfile

    param_seperate ="&";
    configfile = ExtractFilePath(Application->ExeName)+"config.ini";
    databasefile =ExtractFilePath(Application->ExeName)+"data.mdb";


    //ÅäÖÃmscomm ¿Õ¼ä²ÎÊý
    TIniFile *pfile = new TIniFile(dmd->configfile);
    comm_port= pfile->ReadString("rs-comm","port","1") ;
    comm_setting= pfile->ReadString("rs-comm","settings","9600,N,8,1") ;
    delete pfile;

    dbcnn->Close();
    dbcnn->ConnectionString ="Provider=Microsoft.Jet.OLEDB.4.0;Data Source="+databasefile;
    dbcnn->Open();
    

}
//---------------------------------------------------------------------------
