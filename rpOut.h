//----------------------------------------------------------------------------
#ifndef rpOutH
#define rpOutH
//----------------------------------------------------------------------------
#include <vcl\ExtCtrls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Quickrpt.hpp>
#include <vcl\Dialogs.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Classes.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Messages.hpp>
#include <vcl\Windows.hpp>
#include <vcl\System.hpp>
#include <QuickRpt.hpp>
#include <Qrctrls.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
//----------------------------------------------------------------------------
class Tfrmrpt : public TForm
{
__published:
    TQuickRep *rpOut;
    TQRShape *QRShape31;
    TQRBand *TitleBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRLabel *QRLabel17;
    TQRLabel *QRLabel18;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel20;
    TQRLabel *QRLabel21;
    TQRLabel *QRLabel22;
    TQRLabel *QRLabel27;
    TQRLabel *QRLabel28;
    TQRLabel *QRLabel29;
    TQRLabel *QRLabel30;
    TQRLabel *QRLabel23;
    TQRLabel *QRLabel24;
    TQRLabel *QRLabel25;
    TQRLabel *QRLabel26;
    TQRLabel *QRLabel31;
    TQRLabel *QRLabel32;
    TQRLabel *QRLabel33;
    TQRLabel *QRLabel34;
    TQRLabel *QRLabel35;
    TQRLabel *QRLabel36;
    TQRLabel *QRLabel37;
    TQRLabel *QRLabel38;
    TQRLabel *QRLabel39;
    TQRLabel *QRLabel40;
    TQRLabel *QRLabel41;
    TQRLabel *QRLabel42;
    TQRLabel *QRLabel43;
    TQRLabel *QRLabel44;
    TQRLabel *QRLabel45;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape6;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRShape *QRShape16;
    TQRShape *QRShape17;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRShape *QRShape20;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
    TQRLabel *QRLabel46;
    TQRShape *QRShape30;
    TQRShape *QRShape32;
    TQRShape *QRShape33;
    TQRShape *QRShape34;
    TQRShape *QRShape35;
    TQRLabel *QRLabel47;
    TQRLabel *QRLabel48;
    TQRLabel *QRLabel49;
    TQRLabel *QRLabel50;
    TQRLabel *QRLabel51;
    TQRLabel *QRLabel52;
    TQRLabel *QRLabel54;
    TQRLabel *QRLabel55;
    TQRLabel *QRLabel56;
    TQRLabel *QRLabel57;
    TQRLabel *QRLabel58;
    TQRLabel *QRLabel59;
    TQRShape *QRShape36;
    TQRLabel *QRLabel60;
    TQRLabel *QRLabel61;
    TQRLabel *QRLabel62;
    TQRLabel *QRLabel63;
    TQRLabel *QRLabel65;
    TQRShape *QRShape29;
    TQRShape *QRShape38;
    TQRShape *QRShape39;
    TQRShape *QRShape40;
    TQRShape *QRShape41;
    TQRLabel *QRLabel66;
    TQRLabel *QRLabel67;
    TQRLabel *QRLabel68;
    TQRLabel *QRLabel69;
    TQRLabel *QRLabel70;
    TQRLabel *QRLabel71;
    TQRLabel *QRLabel72;
    TQRLabel *QRLabel73;
    TQRLabel *QRLabel74;
    TQRLabel *QRLabel75;
    TQRShape *QRShape21;
    TQRLabel *QRLabel76;
    TQRShape *QRShape22;
    TQRLabel *QRLabel78;
    TQRLabel *QRLabel79;
    TQRLabel *QRLabel80;
    TQRLabel *QRLabel81;
    TQRLabel *QRLabel82;
    TQRLabel *QRLabel83;
    TQRRichText *QRRichText1;
    TQRShape *QRShape23;
    TQRShape *QRShape24;
    TQRLabel *QRLabel53;
    TQRLabel *QRLabel64;
    TQRLabel *QRLabel84;
    TQRLabel *QRLabel85;
    TQRLabel *QRLabel86;
    TQRLabel *QRLabel88;
    TQRShape *QRShape37;
    TQRLabel *QRLabel89;
    TQRLabel *QRLabel90;
    TQRLabel *QRLabel87;
    TQRLabel *QRLabel91;
    TQRLabel *QRLabel92;
    TQRLabel *QRLabel93;
    TQRLabel *QRLabel94;
    TQRLabel *QRLabel95;
    TQRLabel *QRLabel96;
    TQRLabel *QRLabel97;
    TQRLabel *QRLabel98;
    TQRLabel *QRLabel99;
    TQRLabel *QRLabel100;
    TQRLabel *QRLabel101;
    TQRLabel *QRLabel102;
    TQRLabel *QRLabel103;
    TQRLabel *QRLabel104;
    TQRLabel *QRLabel105;
    TQRLabel *QRLabel106;
    TQRLabel *QRLabel107;
    TQRLabel *QRLabel108;
    TQRLabel *QRLabel109;
    TQRLabel *QRLabel110;
    TQRLabel *QRLabel111;
    TQRLabel *QRLabel112;
    TQRLabel *QRLabel113;
    TQRLabel *QRLabel114;
    TQRLabel *QRLabel115;
    TQRLabel *QRLabel116;
    TQRLabel *QRLabel117;
    TQRLabel *QRLabel118;
    TQRLabel *QRLabel119;
    TQRLabel *QRLabel120;
    TQRLabel *QRLabel121;
    TQRLabel *QRLabel122;
    TQRLabel *QRLabel123;
    TQRLabel *QRLabel124;
    TQRLabel *QRLabel125;
    TQRLabel *QRLabel126;
    TQRLabel *QRLabel127;
    TQRLabel *QRLabel128;
    TQRLabel *QRLabel129;
    TQRLabel *QRLabel130;
    TQRLabel *QRLabel131;
    TADOQuery *qry;
    TQRMemo *QRMemo1;
    TQRImage *QRImage3;
    TQRImage *QRImage2;
    TQRLabel *QRLabel77;
    TQRImage *QRImage1;
    TQRLabel *QRLabel132;
    TQRLabel *QRLabel133;
    TQRImage *QRImage4;
    TQRImage *QRImage5;
    TQRImage *QRImage6;
    TQRImage *QRImage7;
    TQRImage *QRImage8;
    TQRImage *QRImage9;
	void __fastcall FormCreate(TObject *Sender);
private:
public:
	virtual __fastcall Tfrmrpt(TComponent* AOwner);
    static long recid ;
    AnsiString dbname;
};
long Tfrmrpt:: recid=0;
//----------------------------------------------------------------------------
extern PACKAGE Tfrmrpt *frmrpt;
//----------------------------------------------------------------------------
#endif    