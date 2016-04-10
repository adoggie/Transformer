//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <CheckLst.hpp>
#include <Buttons.hpp>
#include <ImgList.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
#include "MSCommLib_OCX.h"
#include <OleCtrls.hpp>

#include "dm.h"
//---------------------------------------------------------------------------
/**
    类似substring 功能，用指定字符分隔
*/
AnsiString FindSection(AnsiString data,int reqpos){
    data = " "+data+" ";
    AnsiString retval;
    int pos ;
    pos =  data.AnsiPos(dmd->param_seperate+dmd->param_seperate);
    data.Insert(" ",pos+1);
    pos =  data.AnsiPos(dmd->param_seperate+dmd->param_seperate);
    data.Insert(" ",pos+1);

    char *pstr=NULL;
    TStringList *plist = new TStringList();

    pstr = strtok(data.c_str(), dmd->param_seperate.c_str());
    while(pstr){
        plist->Add(pstr);
        pstr = strtok(NULL,dmd->param_seperate.c_str());
    }
    retval = plist->Strings[reqpos]; //获得指定位置的字符内容
    delete plist;
    return retval.Trim();
}


//---------------------------------------------------------------------------

class TfrmMain : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox2;
    TGroupBox *GroupBox3;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *lbmf_kt;
    TButton *Button1;
    TButton *Button2;
    TButton *Button3;
    TButton *Button4;
    TLabel *Label5;
    TLabel *lbmf_jxdz;
    TLabel *lbmf_fqf;
    TLabel *lbmf_bwg;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label15;
    TLabel *Label17;
    TEdit *edtReqSpeed1;
    TEdit *edtReqSpeed2;
    TEdit *edtReqSpeed3;
    TLabel *Label18;
    TLabel *Label19;
    TLabel *Label20;
    TEdit *edtGetSpeed1;
    TEdit *edtGetSpeed2;
    TEdit *edtGetSpeed3;
    TEdit *edtReqGas1;
    TEdit *edtReqGas2;
    TEdit *edtReqGas3;
    TEdit *edtGetGas1;
    TEdit *edtGetGas2;
    TEdit *edtGetGas3;
    TLabel *Label21;
    TLabel *Label22;
    TLabel *Label23;
    TLabel *Label24;
    TImageList *ImageList1;
    TGroupBox *GroupBox4;
    TToolBar *ToolBar1;
    TSpeedButton *btnSave;
    TSpeedButton *btnReset;
    TSpeedButton *SpeedButton5;
    TToolButton *ToolButton1;
    TLabel *Label25;
    TLabel *Label26;
    TLabel *Label27;
    TLabel *Label28;
    TLabel *Label29;
    TLabel *Label30;
    TEdit *edtGt300_1;
    TEdit *edtGt300_2;
    TEdit *edtGt300_3;
    TEdit *edtGt300_4;
    TButton *btnJc1;
    TButton *btnJc2;
    TButton *btnJc3;
    TButton *btnJc4;
    TLabel *Label31;
    TLabel *Label32;
    TGroupBox *GroupBox5;
    TLabel *Label3;
    TComboBox *cbDevRadius;
    TGroupBox *GroupBox1;
    TLabel *Label4;
    TLabel *Label7;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TLabel *Label16;
    TLabel *Label6;
    TLabel *Label8;
    TEdit *edtDevName;
    TEdit *edtDevCapability;
    TEdit *edtProductNo;
    TCheckListBox *lbProductSpec2;
    TCheckListBox *lbProductSpec1;
    TToolButton *ToolButton2;
    TSpeedButton *SpeedButton6;
    TSpeedButton *SpeedButton7;
    TBitBtn *btnPreStart;
    TBitBtn *btnStart;
    TBitBtn *btnStop;
    TSpeedButton *SpeedButton10;
    TToolButton *ToolButton3;
    TADOQuery *qry;
    TEdit *edtPsName;
    TEdit *edtConsignUnit;
    TEdit *edtProvider;
    TEdit *edtSpec;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton3;
    TSpeedButton *SpeedButton9;
    TSpeedButton *SpeedButton11;
    TStatusBar *sb;
    TTimer *Timer1;
    TGroupBox *GroupBox6;
    TLabel *Label33;
    TMemo *memoConlusion;
    TLabel *Label34;
    TEdit *edtTemperature;
    TLabel *Label35;
    TEdit *edtWet;
    TLabel *Label36;
    TEdit *edtTestMan;
    TLabel *Label37;
    TEdit *edtCharge;
    TLabel *Label38;
    TDateTimePicker *dtTime;
    TMSComm *mscomm;
    TSpeedButton *SpeedButton4;
    TSpeedButton *SpeedButton8;
    TMemo *memoDebug;
    TLabel *Label39;
    TSpeedButton *btnAuto;
    TTimer *Timer2;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall btnJc1Click(TObject *Sender);
    void __fastcall SpeedButton7Click(TObject *Sender);
    void __fastcall SpeedButton6Click(TObject *Sender);
    void __fastcall btnResetClick(TObject *Sender);


    void  __fastcall FloatKeyPress(TObject *Sender, char &Key);
     void  __fastcall IntegerKeyPress(TObject *Sender, char &Key);

     void  __fastcall NumEditChangeCheck(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall cbDevRadiusClick(TObject *Sender);
    void __fastcall btnSaveClick(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall btnPreStartClick(TObject *Sender);
    void __fastcall btnStartClick(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall SpeedButton9Click(TObject *Sender);
    void __fastcall SpeedButton11Click(TObject *Sender);
    void __fastcall SpeedButton4Click(TObject *Sender);
    void __fastcall SpeedButton8Click(TObject *Sender);
    void __fastcall SpeedButton5Click(TObject *Sender);
    void __fastcall SpeedButton10Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall btnStopClick(TObject *Sender);
    void __fastcall mscommComm(TObject *Sender);
    void __fastcall btnAutoClick(TObject *Sender);
    void __fastcall Timer2Timer(TObject *Sender);

private:	// User declarations
    int curno; //   当前记录号

    int recvCnt;
    void DataReset();

    void ComDataIn(AnsiString val);  //串行数据输入
    void ComDataOut(AnsiString val); //串行数据输出

    void CalcSpeed(TEdit *setEdit,int p1,int p2,int p3,int p4,int p5);
    
private:

    // 清空指定类别控件内容，parentCtrl 是父控件
    void ClearSubContent(TWinControl *parentCtrl,AnsiString subClassName){

      //  ShowMessage(parentCtrl->ControlCount);
        for(int i=0 ;i<parentCtrl->ControlCount;i++){

            if( AnsiString( parentCtrl->Controls[i]->ClassName())== AnsiString("TEdit") ){
                TEdit *pedt;
                pedt  = ((TEdit*)parentCtrl->Controls[i]);
                pedt->Text = "";

            }
            if( AnsiString( parentCtrl->Controls[i]->ClassName())== AnsiString("TComboBox") ){
                TComboBox *pctrl;
                pctrl = ((TComboBox*)parentCtrl->Controls[i]);
                pctrl->Text = "";
                pctrl->ItemIndex =-1;

            }
            if( AnsiString( parentCtrl->Controls[i]->ClassName())== AnsiString("TCheckListBox") ){
                TCheckListBox *pctrl;
                pctrl = ((TCheckListBox*)parentCtrl->Controls[i]);
                for(int i=0;i<pctrl->Items->Count;i++){
                    pctrl->Checked[i]= false;
                }

            }

        }

    }
public:		// User declarations
    __fastcall TfrmMain(TComponent* Owner);
    void UpdateBasicInfo(AnsiString name, AnsiString type);
    AnsiString  LoadBasicInfo(TComboBox *combox,AnsiString type);

    bool ShowOne(int recid); //显示指定编号id的记录内容

};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
