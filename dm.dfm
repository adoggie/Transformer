object dmd: Tdmd
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Left = 22
  Top = 171
  Height = 480
  Width = 696
  object dbcnn: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=H:\供' +
      '电局\供电021208\transfermer\data.mdb;Mode=Share Deny None;Extend' +
      'ed Properties="";Persist Security Info=False;Jet OLEDB:System da' +
      'tabase="";Jet OLEDB:Registry Path="";Jet OLEDB:Database Password' +
      '="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Je' +
      't OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transact' +
      'ions=1;Jet OLEDB:New Database Password="";Jet OLEDB:Create Syste' +
      'm Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don'#39 +
      't Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica' +
      ' Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 44
    Top = 156
  end
  object query: TADOQuery
    Connection = dbcnn
    Parameters = <>
    Left = 56
    Top = 268
  end
end
