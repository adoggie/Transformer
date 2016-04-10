//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "systemset.h"

#include <inifiles.hpp>
#include <ADODB.hpp>
#include "selbasic.h"
#include "search.h"
#include "rpOut.h"
#include <list>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "MSCommLib_OCX"
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void SwitchStatus(TLabel *label) {
    if(label->Caption =="是")
        label->Caption ="否";
    else
        label->Caption="是";

}

void __fastcall TfrmMain::Button1Click(TObject *Sender)
{
    SwitchStatus(lbmf_kt);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Button2Click(TObject *Sender)
{
   SwitchStatus(lbmf_jxdz);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Button3Click(TObject *Sender)
{
SwitchStatus(lbmf_fqf);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Button4Click(TObject *Sender)
{
SwitchStatus(lbmf_bwg);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnJc1Click(TObject *Sender)
{
    TButton *pbt = (TButton*)Sender;
    if(pbt->Caption=="不击穿")
        pbt->Caption="击穿";
    else
        pbt->Caption = "不击穿";
}
//--------------------不击穿-------------------------------------------------------


void __fastcall TfrmMain::SpeedButton7Click(TObject *Sender)
{
    TfrmSysset * pform = new TfrmSysset(0);
    pform->ShowModal();
    delete pform;         
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton6Click(TObject *Sender)
{
     if( Application->MessageBox("确定退出系统吗？", NULL, MB_OKCANCEL) == IDOK)
        Application->Terminate();
}
//---------------------------------------------------------------------------

/**
  清空数据，数据复位
*/

void TfrmMain::DataReset(){
    curno = 0;

    cbDevRadius->ItemIndex =-1; //设置管径
    ClearSubContent(GroupBox2,"TEdit");

    ClearSubContent(GroupBox4,"TEdit");
    btnJc1->Caption="不击穿";
    btnJc2->Caption="不击穿";
    btnJc3->Caption="不击穿";
    btnJc4->Caption="不击穿";

    lbmf_kt->Caption="否";
    lbmf_jxdz->Caption="否";
    lbmf_fqf->Caption="否";
    lbmf_bwg->Caption="否";

    ClearSubContent(GroupBox5,"TComboBox");

    ClearSubContent(GroupBox1,"TEdit");
    ClearSubContent(GroupBox1,"TComboBox");
    ClearSubContent(GroupBox1,"TCheckListBox");

     memoConlusion->Lines->Text ="";
     edtTemperature->Text ="";
     edtWet->Text="";
     edtTestMan->Text="";
     edtCharge->Text="";
     dtTime->DateTime =  Now();

}



void __fastcall TfrmMain::btnResetClick(TObject *Sender)
{
//
    DataReset();
}
//---------------------------------------------------------------------------
    void  __fastcall TfrmMain::FloatKeyPress(TObject *Sender, char &Key){
        if(isdigit(Key)||Key ==8 || Key==13||Key=='.'){
            ;
        }else
            Key=0;
     }
     void  __fastcall TfrmMain::IntegerKeyPress(TObject *Sender, char &Key){
        if(isdigit(Key)||Key ==8 || Key==13){
            ;
        }else
            Key=0;
     }

void  __fastcall TfrmMain::NumEditChangeCheck(TObject *Sender){
    /*
    TEdit *pedt;
    pedt = (TEdit*)Sender;
    try{
        pedt->Text.ToDouble();
    }catch(...){
        pedt->Text=0;
    }
    */
}


void __fastcall TfrmMain::FormCreate(TObject *Sender)
{
     mscomm->CommPort = dmd->comm_port.ToInt();
     mscomm->Settings = dmd->comm_setting;
     DataReset();
     sb->Panels->Items[0]->Text ="就绪";
     

 


}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::cbDevRadiusClick(TObject *Sender)
{
//


    if(cbDevRadius->ItemIndex ==-1) return;

    TIniFile *pfile = new TIniFile(dmd->configfile);
    AnsiString type = cbDevRadius->Items->Strings[cbDevRadius->ItemIndex];
    edtReqSpeed1->Text= pfile->ReadString("spce params","reqspeed"+type,"") ;
    edtReqSpeed2->Text=edtReqSpeed1->Text;
    edtReqSpeed3->Text=edtReqSpeed1->Text;

    edtReqGas1->Text =pfile->ReadString("spce params","gas"+type,"") ;
    edtReqGas2->Text =edtReqGas1->Text;
    edtReqGas3->Text =edtReqGas1->Text;


 
    
    delete pfile;

}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnSaveClick(TObject *Sender)
{
    if(cbDevRadius->ItemIndex ==-1){
        ShowMessage("请选择管径！");
        cbDevRadius->SetFocus();
        return;
    }
//
    AnsiString sql;
    AnsiString val;
    TADOQuery *query;

    if(curno){
        sql ="UPDATE  TEST SET RADIUS =:RADIUS,PS =:PS,DEVNAME =:DEVNAME,\
                DEVCAPABILITY =:DEVCAPABILITY,CONSINGUNIT =:CONSINGUNIT,\
                PRODUCTNO =:PRODUCTNO,SPEC =:SPEC,PROVIDER =:PROVIDER,\
                PRODUCTSPEC1 =:PRODUCTSPEC1,PRODUCTSPEC2 =:PRODUCTSPEC2,\
                CONCLUSION =:CONCLUSION,TEMPERATURE =:TEMPERATURE,WET =:WET,\
                TESTER =:TESTER,CHARGE =:CHARGE,OPTTIME =:OPTTIME,\
                VERIFY_JDQ_STEP1 =:VERIFY_JDQ_STEP1,VERIFY_JDQ_STEP2 =:VERIFY_JDQ_STEP2,\
                VERIFY_JDQ_STEP3 =:VERIFY_JDQ_STEP3,JY_GT300 =:JY_GT300,\
                JY_2000 =:JY_2000,MF =:MF   WHERE ID=:ID";
        // modify record
    }else{
        sql ="INSERT INTO TEST (RADIUS,PS,DEVNAME,DEVCAPABILITY,CONSINGUNIT,PRODUCTNO,SPEC,PROVIDER,PRODUCTSPEC1,PRODUCTSPEC2,CONCLUSION,TEMPERATURE,WET,TESTER,CHARGE,OPTTIME,VERIFY_JDQ_STEP1,VERIFY_JDQ_STEP2,VERIFY_JDQ_STEP3,JY_GT300,JY_2000,MF) VALUES (:RADIUS,:PS,:DEVNAME,:DEVCAPABILITY,:CONSINGUNIT,:PRODUCTNO,:SPEC,:PROVIDER,:PRODUCTSPEC1,:PRODUCTSPEC2,:CONCLUSION,:TEMPERATURE,:WET,:TESTER,:CHARGE,:OPTTIME,:VERIFY_JDQ_STEP1,:VERIFY_JDQ_STEP2,:VERIFY_JDQ_STEP3,:JY_GT300,:JY_2000,:MF)" ;
        ; // append record
    }

    query =  dmd->query;
    query->Close();
    query->SQL->Text = sql;

    query->Parameters->ParamByName("RADIUS")->Value= cbDevRadius->ItemIndex;
    query->Parameters->ParamByName("PS")->Value= edtPsName->Text.Trim();
    query->Parameters->ParamByName("DEVNAME")->Value= edtDevName->Text.Trim();
    query->Parameters->ParamByName("DEVCAPABILITY")->Value= edtDevCapability->Text.Trim();
    query->Parameters->ParamByName("CONSINGUNIT")->Value= edtConsignUnit->Text.Trim();
    query->Parameters->ParamByName("PRODUCTNO")->Value= edtProductNo->Text.Trim();
    query->Parameters->ParamByName("SPEC")->Value= edtSpec->Text.Trim();
    query->Parameters->ParamByName("PROVIDER")->Value= edtProvider->Text.Trim();

    val ="";
    if(lbProductSpec1->Checked[0]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec1->Checked[1]) val+="1";else val+="0" ;
    query->Parameters->ParamByName("PRODUCTSPEC1")->Value= val;

    val ="";
    if(lbProductSpec2->Checked[0]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec2->Checked[1]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec2->Checked[2]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec2->Checked[3]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec2->Checked[4]) val+="1";else val+="0" ;
    val+=dmd->param_seperate;
    if(lbProductSpec2->Checked[5]) val+="1";else val+="0" ;


    query->Parameters->ParamByName("PRODUCTSPEC2")->Value= val ;

    query->Parameters->ParamByName("CONCLUSION")->Value= memoConlusion->Lines->Text;
    query->Parameters->ParamByName("TEMPERATURE")->Value=edtTemperature->Text.Trim() ;
    query->Parameters->ParamByName("WET")->Value= edtWet->Text.Trim();
    query->Parameters->ParamByName("TESTER")->Value= edtTestMan->Text.Trim();
    query->Parameters->ParamByName("CHARGE")->Value= edtCharge->Text.Trim();
    query->Parameters->ParamByName("OPTTIME")->Value=dtTime->DateTime ;

    val="";
    val+=edtReqSpeed1->Text.Trim() + dmd->param_seperate+edtGetSpeed1->Text.Trim()+dmd->param_seperate+\
            edtReqGas1->Text.Trim()+dmd->param_seperate+edtGetGas1->Text.Trim();
    query->Parameters->ParamByName("VERIFY_JDQ_STEP1")->Value= val ;

    val="";
    val+=edtReqSpeed2->Text.Trim() + dmd->param_seperate+edtGetSpeed2->Text.Trim()+dmd->param_seperate+\
            edtReqGas2->Text.Trim()+dmd->param_seperate+edtGetGas2->Text.Trim();
    query->Parameters->ParamByName("VERIFY_JDQ_STEP2")->Value= val;

    val="";
    val+=edtReqSpeed3->Text.Trim() + dmd->param_seperate+edtGetSpeed3->Text.Trim()+dmd->param_seperate+\
            edtReqGas3->Text.Trim()+dmd->param_seperate+edtGetGas3->Text.Trim();
    query->Parameters->ParamByName("VERIFY_JDQ_STEP3")->Value=val ;

    val="";
    val+=edtGt300_1->Text.Trim()+dmd->param_seperate+edtGt300_2->Text.Trim()+dmd->param_seperate+\
            edtGt300_3->Text.Trim()+dmd->param_seperate+edtGt300_4->Text.Trim();
    query->Parameters->ParamByName("JY_GT300")->Value=val ;

    val="";
    val+= (btnJc1->Caption=="击穿")?"1":"0";
    val+= dmd->param_seperate;
    val+= (btnJc2->Caption=="击穿")?"1":"0";
    val+= dmd->param_seperate;
    val+= (btnJc3->Caption=="击穿")?"1":"0";
    val+= dmd->param_seperate;
    val+= (btnJc1->Caption=="击穿")?"1":"0";
    query->Parameters->ParamByName("JY_2000")->Value= val;


    val="";
    val+= (lbmf_kt->Caption=="是")?"1":"0";
    val+= dmd->param_seperate;
    val+= (lbmf_jxdz->Caption=="是")?"1":"0";
    val+= dmd->param_seperate;
    val+= (lbmf_fqf->Caption=="是")?"1":"0";
    val+= dmd->param_seperate;
    val+= (lbmf_bwg->Caption=="是")?"1":"0";
    query->Parameters->ParamByName("MF")->Value= val;
    //修改判断
    if(curno)
        query->Parameters->ParamByName("ID")->Value= curno;



    dmd->dbcnn->BeginTrans();
    try{
        query->ExecSQL();
        dmd->dbcnn->CommitTrans();
    }catch(...){
        dmd->dbcnn->RollbackTrans();
        ShowMessage("数据存储失败！\n请检测系统数据库是否完整!");
        return;
    }
    //新增记录后，设置当前记录id
    if(curno ==0){
        sql="select max(id) as id from test";
        query->Close();
        query->SQL->Text = sql;
        query->Open();
        curno = query->FieldByName("ID")->AsInteger;

    }
    sb->Panels->Items[0]->Text = Now().TimeString()+"  记录 "+curno +" 被储存！" ;


    if(edtPsName->Text.Trim()!="")
        UpdateBasicInfo(edtPsName->Text.Trim(),"POWERSTATION");
    if(edtConsignUnit->Text.Trim()!="")
        UpdateBasicInfo(edtConsignUnit->Text.Trim(),"CONSIGUNIT");  //委托单位
    if(edtSpec->Text.Trim()!="")
        UpdateBasicInfo(edtSpec->Text.Trim(),"SPEC");  //规格型号
    if(edtProvider->Text.Trim()!="")
        UpdateBasicInfo(edtProvider->Text.Trim(),"PROVIDER");  //供应商

    if(edtTestMan->Text.Trim()!="")
        UpdateBasicInfo(edtTestMan->Text.Trim(),"EMPLOYEE");  //操作人员
    if(edtCharge->Text.Trim()!="")
        UpdateBasicInfo(edtCharge->Text.Trim(),"EMPLOYEE");  //操作人员
  









}
//---------------------------------------------------------------------------


void TfrmMain::UpdateBasicInfo(AnsiString name, AnsiString type)
{
    TADOQuery *query;
    query =  dmd->query;
    query->Close();

    query->SQL->Text = "SELECT COUNT(*) AS CNT FROM BASICINFO WHERE NAME=:NAME AND TYPE=:TYPE";

    query->Parameters->ParamByName("NAME")->Value = name;
    query->Parameters->ParamByName("TYPE")->Value = type;


    query->Open();
    if(query->FieldByName("CNT")->AsInteger ==0){
        query->Close();
        query->SQL->Text = "INSERT INTO BASICINFO (NAME,TYPE) VALUES(:NAME,:TYPE)";
        query->Parameters->ParamByName("NAME")->Value = name;
        query->Parameters->ParamByName("TYPE")->Value = type;
        query->ExecSQL();


    }
}


AnsiString  TfrmMain::LoadBasicInfo(TComboBox *combox,AnsiString type){
    AnsiString retval;


    
    qry->Close();

    qry->SQL->Text = "SELECT *  FROM BASICINFO WHERE  TYPE=:TYPE ORDER BY NAME";
    qry->Parameters->ParamByName("TYPE")->Value = type;
    qry->Open();
    for(int i=0;i<qry->RecordCount;i++){
        combox->Items->Add(qry->FieldByName("NAME")->AsString);
    }

 //   qry->Close();
    return retval;
}
void __fastcall TfrmMain::Timer1Timer(TObject *Sender)
{
    sb->Panels->Items[1]->Text =Now();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnPreStartClick(TObject *Sender)
{
    int idx ;
    idx = cbDevRadius->ItemIndex;
    DataReset();
    cbDevRadius->ItemIndex= idx ;
    if(idx == -1){
        ShowMessage("请选择管径!");
        cbDevRadius->SetFocus();
        return;
    }


    recvCnt=0;
    curno=0;
    sb->Panels->Items[0]->Text ="开始测试...";


    //communicate with device

    if(mscomm->PortOpen){
        mscomm->PortOpen = false;
    }
    mscomm->PortOpen = true;

    AnsiString out;
    if(cbDevRadius->ItemIndex == 0)
        out ="A";
    if(cbDevRadius->ItemIndex == 1)
        out ="B";
    if(cbDevRadius->ItemIndex == 2)
        out ="C";

    mscomm->OutBufferCount =0;
    mscomm->Output = out;
    ComDataOut(out);



    
    

    

}

 //显示指定编号id的记录内容
bool TfrmMain::ShowOne(int recid){
    AnsiString sql ;
    AnsiString val;
    sql = "SELECT * FROM TEST WHERE ID="+AnsiString(recid);
    qry->Close();
    qry->SQL->Text =sql;

    qry->Open();

    if(qry->RecordCount!=1){

        return false;

    }
    curno =  qry->FieldByName("ID")->AsInteger;
//-----------------------------------
//显示指定记录
    cbDevRadius->ItemIndex = qry->FieldByName("RADIUS")->AsInteger;
    edtPsName->Text = qry->FieldByName("PS")->AsString;
    edtDevName->Text = qry->FieldByName("DEVNAME")->AsString;
    edtDevCapability->Text = qry->FieldByName("DEVCAPABILITY")->AsString;
    edtConsignUnit->Text = qry->FieldByName("CONSINGUNIT")->AsString;
    edtProductNo->Text = qry->FieldByName("PRODUCTNO")->AsString;
    edtSpec->Text = qry->FieldByName("SPEC")->AsString;
    edtProvider->Text =qry->FieldByName("PROVIDER")->AsString;
    
    val = qry->FieldByName("PRODUCTSPEC1")->AsString;
    lbProductSpec1->Checked[0] = (bool)FindSection(val,0).ToInt();
    lbProductSpec1->Checked[1] = (bool)FindSection(val,1).ToInt();

    val = qry->FieldByName("PRODUCTSPEC2")->AsString;
    lbProductSpec2->Checked[0] = (bool)FindSection(val,0).ToInt();
    lbProductSpec2->Checked[1] = (bool)FindSection(val,1).ToInt();
    lbProductSpec2->Checked[2] = (bool)FindSection(val,2).ToInt();
    lbProductSpec2->Checked[3] = (bool)FindSection(val,3).ToInt();
    lbProductSpec2->Checked[4] = (bool)FindSection(val,4).ToInt();
    lbProductSpec2->Checked[5] = (bool)FindSection(val,5).ToInt();

    memoConlusion->Lines->Text =qry->FieldByName("CONCLUSION")->AsString;
    edtTemperature->Text =qry->FieldByName("TEMPERATURE")->AsString;
    edtWet->Text = qry->FieldByName("WET")->AsString;
    edtTestMan->Text = qry->FieldByName("TESTER")->AsString;
    edtCharge->Text =  qry->FieldByName("CHARGE")->AsString;
    dtTime->DateTime = qry->FieldByName("OPTTIME")->AsDateTime;

    val =qry->FieldByName("VERIFY_JDQ_STEP1")->AsString;
    edtReqSpeed1->Text = FindSection(val,0);
    edtGetSpeed1->Text = FindSection(val,1);
    edtReqGas1->Text = FindSection(val,2);
    edtGetGas1->Text = FindSection(val,3);

    val = qry->FieldByName("VERIFY_JDQ_STEP2")->AsString;
    edtReqSpeed2->Text = FindSection(val,0);
    edtGetSpeed2->Text = FindSection(val,1);
    edtReqGas2->Text = FindSection(val,2);
    edtGetGas2->Text = FindSection(val,3);

    val = qry->FieldByName("VERIFY_JDQ_STEP3")->AsString;
    edtReqSpeed3->Text = FindSection(val,0);
    edtGetSpeed3->Text = FindSection(val,1);
    edtReqGas3->Text = FindSection(val,2);
    edtGetGas3->Text = FindSection(val,3);

    val = qry->FieldByName("JY_GT300")->AsString;
    edtGt300_1->Text = FindSection(val,0);
    edtGt300_2->Text = FindSection(val,1);
    edtGt300_3->Text = FindSection(val,2);
    edtGt300_4->Text = FindSection(val,3);

    val = qry->FieldByName("JY_2000")->AsString;
    btnJc1->Caption = (FindSection(val,0)=="1"?"击穿":"不击穿");
    btnJc2->Caption = (FindSection(val,1)=="1"?"击穿":"不击穿");
    btnJc3->Caption = (FindSection(val,2)=="1"?"击穿":"不击穿");
    btnJc4->Caption = (FindSection(val,3)=="1"?"击穿":"不击穿");

    val = qry->FieldByName("MF")->AsString;
    lbmf_kt->Caption = (FindSection(val,0)=="1"?"是":"否");
    lbmf_jxdz->Caption = (FindSection(val,1)=="1"?"是":"否");
    lbmf_fqf->Caption = (FindSection(val,2)=="1"?"是":"否");
    lbmf_bwg->Caption = (FindSection(val,3)=="1"?"是":"否");


//-----------------------------------
    return true;
}
void __fastcall TfrmMain::btnStartClick(TObject *Sender)
{
//
    AnsiString out="D";
    if(mscomm->PortOpen == false)
        mscomm->PortOpen = true;
    mscomm->Output = out;
    ComDataOut(out);

    if(btnAuto->Caption !="自动复位"){
        Timer2->Enabled = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton1Click(TObject *Sender)
{
    AnsiString val = edtPsName->Text;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"POWERSTATION");
    delete pform;
    edtPsName->Text = val;

}
//---------------------------------------------------------------------------


void __fastcall TfrmMain::SpeedButton3Click(TObject *Sender)
{

    AnsiString val = edtConsignUnit->Text;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"CONSIGUNIT");
    delete pform;
    edtConsignUnit->Text = val;

}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton9Click(TObject *Sender)
{
    AnsiString val = edtSpec->Text;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"SPEC");
    delete pform;
    edtSpec->Text = val;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton11Click(TObject *Sender)
{
    AnsiString val = edtProvider->Text ;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"PROVIDER");
    delete pform;
    edtProvider->Text = val;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton4Click(TObject *Sender)
{
    AnsiString val=edtTestMan->Text;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"EMPLOYEE");
    delete pform;
    edtTestMan->Text = val;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton8Click(TObject *Sender)
{
    AnsiString val = edtCharge->Text ;
    TfrmSel *pform = new TfrmSel(0);
    pform->GetSelEntry(&val,"EMPLOYEE");
    delete pform;
    edtCharge->Text = val;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton5Click(TObject *Sender)
{

    if(curno==0) {
        ShowMessage("必须保存当前记录后继续尝试打印!");
        return;
    }
    //
    //btnSaveClick(NULL);
    // doreport
    Tfrmrpt::recid = curno;
    Tfrmrpt *pform = new Tfrmrpt(this);
   pform->rpOut->Print();
//     pform->rpOut->PreviewModal();

}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::SpeedButton10Click(TObject *Sender)
{
    if(frmSearch){
        ShowWindow(frmSearch->Handle,SW_RESTORE);
        frmSearch->SetFocus();
        return ;
    }
     frmSearch = new TfrmSearch(this);
     frmSearch->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmMain::FormClose(TObject *Sender, TCloseAction &Action)
{
//     if( Application->MessageBox("确定退出系统吗？", NULL, MB_OKCANCEL) == IDOK)
//        Application->Terminate();
}
//---------------------------------------------------------------------------
 //串行数据输入
void TfrmMain::ComDataIn(AnsiString val){
    memoDebug->Lines->Add("RX=> "+val);

}

//串行数据输出
void TfrmMain::ComDataOut(AnsiString val){
    memoDebug->Lines->Add("TX=> "+val);
}

void __fastcall TfrmMain::btnStopClick(TObject *Sender)
{

    AnsiString out="E";
    if(mscomm->PortOpen == false)
        mscomm->PortOpen = true;
    mscomm->Output = out;
    ComDataOut(out);
    //复位
    recvCnt = 0; //接受3次后，计数复位到0
    Timer2->Enabled = false;

}
//---------------------------------------------------------------------------
int __fastcall Compare(void *p1,void *p2){
    if( *(int*)(p1) > *(int*)(p2) ){
        return 1;
    }else
        return  -1;
}

void TfrmMain::CalcSpeed( TEdit *setEdit,int p1,int p2,int p3,int p4,int p5){
/****************************
A = A / 3
If Form1.Text18.Text = "50" Then
'b1 = 2.7525
'b2 = 36.527
b2 = 20 + typrun.Setcgq1 / 1000 'Setcgq1 传感器常数1 (50)

b3 = 1.9625  '截面积 50
b4 = typrun.Setwcxz50 / 1000  'Setwcxz50 误差值
End If
If Form1.Text18.Text = "25" Then
'b1 = 0.9175
'b2 = 336.52
b2 = 200 + typrun.Setcgq2 / 1000
b3 = 0.4905
b4 = typrun.Setwcxz25 / 1000
End If
If Form1.Text18.Text = "80" Then
'b1 = 0.524288
'b2 = 36.527
b2 = 20 + typrun.Setcgq1 / 1000
b3 = 5.024
b4 = typrun.Setwcxz80 / 1000
End If
'A = A / b1
A = A / b2
A = A / b3
A = A * (1 - b4)

*************************************************/

/*
    TList *plst = new TList();
    plst->Add(&p1);
    plst->Add(&p2);
    plst->Add(&p3);
    plst->Add(&p4);
    plst->Add(&p5);
    plst->Sort(&Compare);
    for(int i=0;i<plst->Count;i++){
        memoDebug->Lines->Add(AnsiString(*(int*)plst->Items[i])+" ");

    }
    delete plst;
    */
    int ctr[5]={p1,p2,p3,p4,p5};
   // int v1,v2,v3;
    for(int i=0;i<sizeof(ctr)/4-1;i++){
        for(int j=i+1;j<sizeof(ctr)/4;j++){
            int t;
            if(ctr[j]<ctr[i]){
                t = ctr[i];
                ctr[i]= ctr[j];
                ctr[j] = t;
            }

        }
    }
    //取出最大最小

    double val,v1,v2,v3;
    val = (ctr[1]+ctr[2]+ctr[3])/3;     //平均值

    AnsiString strinifile =dmd->configfile;
    TIniFile *pcfg = new TIniFile(strinifile);
    //传感器值
    double cgq = pcfg->ReadFloat("spce params","sensor"+cbDevRadius->Items->Strings[cbDevRadius->ItemIndex],0.0);
    //误差
    double wc = pcfg->ReadFloat("spce params","diff"+cbDevRadius->Items->Strings[cbDevRadius->ItemIndex],0.0);
    delete pcfg;


    if(cbDevRadius->ItemIndex ==0){ //25
        v1 = 200 + cgq /1000.00;
        v2 = 0.4905;
        v3 = wc /1000.00 ;
    }
    if(cbDevRadius->ItemIndex ==1){//50
        v1 = 20 + cgq /1000.00;
        v2 = 1.9625;
        v3 = wc /1000.00  ;
    }
    if(cbDevRadius->ItemIndex ==2){//80
        v1 = 20 + cgq /1000.00;
        v2 = 5.024;
        v3 = wc /1000.00   ;
    }
    val = val /v1;
    val = val /v2;
    val = val * ( 1- v3);

    setEdit->Text = AnsiString(val); //显示实际测试流速值




    



}

void __fastcall TfrmMain::mscommComm(TObject *Sender)
{
//
    AnsiString data;
    TEdit *pedt;
    if(mscomm->CommEvent == 2){
        OleVariant recv=mscomm->Input;
        switch(recv.ArrayHighBound(1)+1){
            case 1:
                if( 255==(UINT)recv.GetElement(0)){
                   ShowMessage("可以放空气了!");
                }
                break;
            case 5:
                recvCnt++;
                switch(recvCnt){
                    case 1:
                        pedt = edtGetSpeed1;
                        break;
                    case 2:
                        pedt = edtGetSpeed1;
                        break;
                    case 3:
                        pedt = edtGetSpeed1;
                        recvCnt = 0; //接受3次后，计数复位到0
                        Timer2->Enabled = false;
                        break;

                }
                CalcSpeed(pedt,(UINT)recv.GetElement(0),(UINT)recv.GetElement(1),\
                    (UINT)recv.GetElement(2),(UINT)recv.GetElement(3),(UINT)recv.GetElement(4));

                break;
            default:
                ;
        }
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmMain::btnAutoClick(TObject *Sender)
{
    if(btnAuto->Caption == "自动复位"){
        btnAuto->Caption = "手动复位";
    }else btnAuto->Caption = "自动复位";


}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Timer2Timer(TObject *Sender)
{
    AnsiString out="D";
    if(mscomm->PortOpen == false)
        mscomm->PortOpen = true;
    mscomm->Output = out;
    ComDataOut(out);    
}
//---------------------------------------------------------------------------

