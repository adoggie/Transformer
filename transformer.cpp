//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("transformer.res");
USEFORM("main.cpp", frmMain);
USEFORM("systemset.cpp", frmSysset);
USEFORM("dm.cpp", dmd); /* TDataModule: File Type */
USEUNIT("sys.cpp");
USEFORM("selbasic.cpp", frmSel);
USEFORM("search.cpp", frmSearch);
USEFORM("rpOut.cpp", frmrpt);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->Title = "瓦斯继电器测量记录 v1.0";
         Application->CreateForm(__classid(Tdmd), &dmd);
         Application->CreateForm(__classid(TfrmMain), &frmMain);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
