//---------------------------------------------------------------------------

#ifndef dmH
#define dmH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
//---------------------------------------------------------------------------
class Tdmd : public TDataModule
{
__published:	// IDE-managed Components
    TADOConnection *dbcnn;
    TADOQuery *query;
    void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall Tdmd(TComponent* Owner);

    AnsiString configfile,databasefile,param_seperate;
    AnsiString comm_port,comm_setting;
};
//---------------------------------------------------------------------------
extern PACKAGE Tdmd *dmd;
//---------------------------------------------------------------------------
#endif
