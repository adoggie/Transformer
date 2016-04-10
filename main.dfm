object frmMain: TfrmMain
  Left = 100
  Top = 40
  BorderStyle = bsDialog
  Caption = '上海超高压输变电公司  瓦斯继电器测量记录 v1.0'
  ClientHeight = 579
  ClientWidth = 801
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = '宋体'
  Font.Style = []
  FormStyle = fsMDIForm
  OldCreateOrder = False
  Position = poScreenCenter
  WindowState = wsMaximized
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label39: TLabel
    Left = 320
    Top = 364
    Width = 52
    Height = 13
    Caption = '调试输出'
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 40
    Width = 417
    Height = 149
    Caption = '继电器动作值校验'
    TabOrder = 0
    object Label9: TLabel
      Left = 12
      Top = 72
      Width = 39
      Height = 13
      Caption = '第一次'
    end
    object Label10: TLabel
      Left = 12
      Top = 124
      Width = 39
      Height = 13
      Caption = '第三次'
    end
    object Label15: TLabel
      Left = 12
      Top = 100
      Width = 39
      Height = 13
      Caption = '第二次'
    end
    object Label17: TLabel
      Left = 56
      Top = 28
      Width = 65
      Height = 13
      Caption = '流速要求值'
    end
    object Label18: TLabel
      Left = 136
      Top = 28
      Width = 65
      Height = 13
      Caption = '流速实测值'
    end
    object Label19: TLabel
      Left = 216
      Top = 28
      Width = 91
      Height = 13
      Caption = '瓦斯容积要求值'
    end
    object Label20: TLabel
      Left = 320
      Top = 28
      Width = 91
      Height = 13
      Caption = '瓦斯容积实测值'
    end
    object Label21: TLabel
      Left = 68
      Top = 48
      Width = 35
      Height = 13
      Caption = '(M/S)'
    end
    object Label22: TLabel
      Left = 156
      Top = 48
      Width = 35
      Height = 13
      Caption = '(M/S)'
    end
    object Label23: TLabel
      Left = 240
      Top = 48
      Width = 35
      Height = 13
      Caption = '(m/l)'
    end
    object Label24: TLabel
      Left = 336
      Top = 48
      Width = 35
      Height = 13
      Caption = '(m/l)'
    end
    object edtReqSpeed1: TEdit
      Left = 60
      Top = 68
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 0
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtReqSpeed2: TEdit
      Left = 60
      Top = 94
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 1
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtReqSpeed3: TEdit
      Left = 60
      Top = 120
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 2
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetSpeed1: TEdit
      Left = 140
      Top = 68
      Width = 60
      Height = 19
      TabStop = False
      Color = clBtnFace
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 3
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetSpeed2: TEdit
      Left = 140
      Top = 94
      Width = 60
      Height = 19
      TabStop = False
      Color = clBtnFace
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 4
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetSpeed3: TEdit
      Left = 140
      Top = 120
      Width = 60
      Height = 19
      TabStop = False
      Color = clBtnFace
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 5
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtReqGas1: TEdit
      Left = 224
      Top = 68
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 6
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtReqGas2: TEdit
      Left = 224
      Top = 94
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 7
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtReqGas3: TEdit
      Left = 224
      Top = 120
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 8
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetGas1: TEdit
      Left = 320
      Top = 68
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 9
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetGas2: TEdit
      Left = 320
      Top = 94
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 10
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object edtGetGas3: TEdit
      Left = 320
      Top = 120
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 11
      OnChange = NumEditChangeCheck
      OnKeyPress = FloatKeyPress
    end
    object mscomm: TMSComm
      Left = 380
      Top = 92
      Width = 32
      Height = 32
      OnComm = mscommComm
      ControlData = {
        2143341208000000ED030000ED03000001568A64000006000000010000040000
        00020100802500000000080000000000000000003F00000011000000}
    end
  end
  object GroupBox3: TGroupBox
    Left = 12
    Top = 360
    Width = 301
    Height = 193
    Caption = '密封性能试验'
    TabOrder = 1
    object Label1: TLabel
      Left = 56
      Top = 40
      Width = 52
      Height = 13
      Caption = '检测位置'
    end
    object Label2: TLabel
      Left = 180
      Top = 40
      Width = 52
      Height = 13
      Caption = '是否渗油'
    end
    object lbmf_kt: TLabel
      Left = 196
      Top = 64
      Width = 14
      Height = 13
      Caption = '否'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 12
      Top = 16
      Width = 268
      Height = 13
      Caption = '继电器注满油并加压至0.15MPa    稳压20min'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlue
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = []
      ParentFont = False
    end
    object lbmf_jxdz: TLabel
      Left = 196
      Top = 97
      Width = 14
      Height = 13
      Caption = '否'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lbmf_fqf: TLabel
      Left = 196
      Top = 123
      Width = 14
      Height = 13
      Caption = '否'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lbmf_bwg: TLabel
      Left = 196
      Top = 152
      Width = 14
      Height = 13
      Caption = '否'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Button1: TButton
      Left = 24
      Top = 60
      Width = 117
      Height = 25
      Caption = '壳体油位窗'
      TabOrder = 0
      TabStop = False
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 24
      Top = 89
      Width = 117
      Height = 25
      Caption = '接线端子干簧管'
      TabOrder = 1
      TabStop = False
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 24
      Top = 119
      Width = 117
      Height = 25
      Caption = '放气阀'
      TabOrder = 2
      TabStop = False
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 24
      Top = 148
      Width = 117
      Height = 25
      Caption = '波纹管'
      TabOrder = 3
      TabStop = False
      OnClick = Button4Click
    end
  end
  object GroupBox4: TGroupBox
    Left = 8
    Top = 192
    Width = 413
    Height = 165
    Caption = '绝缘强度试验'
    TabOrder = 2
    object Label25: TLabel
      Left = 20
      Top = 56
      Width = 117
      Height = 13
      Caption = '下瓦斯干簧管端子间'
    end
    object Label26: TLabel
      Left = 20
      Top = 136
      Width = 143
      Height = 13
      Caption = '上瓦斯干簧管端子对外壳'
    end
    object Label27: TLabel
      Left = 20
      Top = 109
      Width = 143
      Height = 13
      Caption = '下瓦斯干簧管端子对外壳'
    end
    object Label28: TLabel
      Left = 20
      Top = 83
      Width = 117
      Height = 13
      Caption = '上瓦斯干簧管端子间'
    end
    object Label29: TLabel
      Left = 200
      Top = 16
      Width = 49
      Height = 13
      Caption = '>=300  '
    end
    object Label30: TLabel
      Left = 300
      Top = 12
      Width = 77
      Height = 13
      Caption = '2000V/1min '
    end
    object Label31: TLabel
      Left = 172
      Top = 32
      Width = 88
      Height = 13
      Caption = '(1000V绝缘表)'
    end
    object Label32: TLabel
      Left = 296
      Top = 32
      Width = 79
      Height = 13
      Caption = ' (耐压试验）'
    end
    object edtGt300_1: TEdit
      Left = 184
      Top = 52
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      MaxLength = 4
      ParentCtl3D = False
      TabOrder = 0
      OnKeyPress = IntegerKeyPress
    end
    object edtGt300_2: TEdit
      Left = 184
      Top = 78
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      MaxLength = 4
      ParentCtl3D = False
      TabOrder = 1
      OnKeyPress = IntegerKeyPress
    end
    object edtGt300_3: TEdit
      Left = 184
      Top = 104
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      MaxLength = 4
      ParentCtl3D = False
      TabOrder = 2
      OnKeyPress = IntegerKeyPress
    end
    object edtGt300_4: TEdit
      Left = 184
      Top = 132
      Width = 60
      Height = 19
      TabStop = False
      Ctl3D = False
      MaxLength = 4
      ParentCtl3D = False
      TabOrder = 3
      OnKeyPress = IntegerKeyPress
    end
    object btnJc1: TButton
      Left = 304
      Top = 48
      Width = 60
      Height = 25
      Caption = '不击穿'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
      TabStop = False
      OnClick = btnJc1Click
    end
    object btnJc2: TButton
      Left = 304
      Top = 75
      Width = 60
      Height = 25
      Caption = '不击穿'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 5
      TabStop = False
      OnClick = btnJc1Click
    end
    object btnJc3: TButton
      Left = 304
      Top = 101
      Width = 60
      Height = 25
      Caption = '不击穿'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      TabStop = False
      OnClick = btnJc1Click
    end
    object btnJc4: TButton
      Left = 304
      Top = 128
      Width = 60
      Height = 25
      Caption = '不击穿'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
      TabStop = False
      OnClick = btnJc1Click
    end
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 801
    Height = 33
    ButtonHeight = 27
    ButtonWidth = 57
    Caption = 'ToolBar1'
    TabOrder = 3
    object SpeedButton10: TSpeedButton
      Left = 0
      Top = 2
      Width = 72
      Height = 27
      Hint = '浏览其他记录'
      Caption = '查询'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        333333333333333FF3FF3333333333CC30003333333333773777333333333C33
        3000333FF33337F33777339933333C3333333377F33337F3333F339933333C33
        33003377333337F33377333333333C333300333F333337F33377339333333C33
        3333337FF3333733333F33993333C33333003377FF33733333773339933C3333
        330033377FF73F33337733339933C33333333FF377F373F3333F993399333C33
        330077F377F337F33377993399333C33330077FF773337F33377399993333C33
        33333777733337F333FF333333333C33300033333333373FF7773333333333CC
        3000333333333377377733333333333333333333333333333333}
      NumGlyphs = 2
      OnClick = SpeedButton10Click
    end
    object ToolButton3: TToolButton
      Left = 72
      Top = 2
      Width = 21
      Caption = 'ToolButton3'
      ImageIndex = 1
      Style = tbsDivider
    end
    object btnSave: TSpeedButton
      Left = 93
      Top = 2
      Width = 61
      Height = 27
      Caption = '存储'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333330070
        7700333333337777777733333333008088003333333377F73377333333330088
        88003333333377FFFF7733333333000000003FFFFFFF77777777000000000000
        000077777777777777770FFFFFFF0FFFFFF07F3333337F3333370FFFFFFF0FFF
        FFF07F3FF3FF7FFFFFF70F00F0080CCC9CC07F773773777777770FFFFFFFF039
        99337F3FFFF3F7F777F30F0000F0F09999937F7777373777777F0FFFFFFFF999
        99997F3FF3FFF77777770F00F000003999337F773777773777F30FFFF0FF0339
        99337F3FF7F3733777F30F08F0F0337999337F7737F73F7777330FFFF0039999
        93337FFFF7737777733300000033333333337777773333333333}
      NumGlyphs = 2
      OnClick = btnSaveClick
    end
    object btnReset: TSpeedButton
      Left = 154
      Top = 2
      Width = 72
      Height = 27
      Caption = '清空'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00500005000555
        555557777F777555F55500000000555055557777777755F75555005500055055
        555577F5777F57555555005550055555555577FF577F5FF55555500550050055
        5555577FF77577FF555555005050110555555577F757777FF555555505099910
        555555FF75777777FF555005550999910555577F5F77777775F5500505509990
        3055577F75F77777575F55005055090B030555775755777575755555555550B0
        B03055555F555757575755550555550B0B335555755555757555555555555550
        BBB35555F55555575F555550555555550BBB55575555555575F5555555555555
        50BB555555555555575F555555555555550B5555555555555575}
      NumGlyphs = 2
      OnClick = btnResetClick
    end
    object SpeedButton5: TSpeedButton
      Left = 226
      Top = 2
      Width = 72
      Height = 27
      Hint = '打印'
      Caption = '打印'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00300000000000
        00033FFFFFFFFFFFFFFF0888888888888880777777777777777F088888888888
        8880777777777777777F0000000000000000FFFFFFFFFFFFFFFF0F8F8F8F8F8F
        8F80777777777777777F08F8F8F8F8F8F9F0777777777777777F0F8F8F8F8F8F
        8F807777777777777F7F0000000000000000777777777777777F3330FFFFFFFF
        03333337F3FFFF3F7F333330F0000F0F03333337F77773737F333330FFFFFFFF
        03333337F3FF3FFF7F333330F00F000003333337F773777773333330FFFF0FF0
        33333337F3FF7F3733333330F08F0F0333333337F7737F7333333330FFFF0033
        33333337FFFF7733333333300000033333333337777773333333}
      NumGlyphs = 2
      OnClick = SpeedButton5Click
    end
    object SpeedButton7: TSpeedButton
      Left = 298
      Top = 2
      Width = 72
      Height = 27
      Hint = '打印'
      Caption = '设置'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00300000000000
        003337777777777777F330FFFFFFFFFFF033373F3F3F3F3F3733330F0F0F0F0F
        03333F7F737373737FFF0000FFFFFFF0000377773FFFFFF7777F0FF800000008
        FF037F3F77777773FF7F0F9FFFFFFFF000037F7333333337777F0FFFFFFFFFFF
        FF0373FFFFFFFFFFFF7330000000000000333777777777777733333000000000
        3333333777777777F3333330FFFFFFF033333337F3FFFFF7F3333330F00000F0
        33333337F77777F7F3333330F0AAE0F033333337F7F337F7F3333330F0DAD0F0
        33333337F7FFF7F7F3333330F00000F033333337F7777737F3333330FFFFFFF0
        33333337FFFFFFF7F33333300000000033333337777777773333}
      NumGlyphs = 2
      OnClick = SpeedButton7Click
    end
    object ToolButton1: TToolButton
      Left = 370
      Top = 2
      Width = 8
      Caption = 'ToolButton1'
      Style = tbsSeparator
    end
    object ToolButton2: TToolButton
      Left = 378
      Top = 2
      Width = 15
      Caption = 'ToolButton2'
      ImageIndex = 0
      Style = tbsDivider
    end
    object SpeedButton6: TSpeedButton
      Left = 393
      Top = 2
      Width = 72
      Height = 27
      Hint = '打印'
      Caption = '退出'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00330000000000
        03333377777777777F333301BBBBBBBB033333773F3333337F3333011BBBBBBB
        0333337F73F333337F33330111BBBBBB0333337F373F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F337F33337F333301110BBBBB0333337F337FF3337F33330111B0BBBB
        0333337F337733337F333301110BBBBB0333337F337F33337F333301110BBBBB
        0333337F3F7F33337F333301E10BBBBB0333337F7F7F33337F333301EE0BBBBB
        0333337F777FFFFF7F3333000000000003333377777777777333}
      NumGlyphs = 2
      OnClick = SpeedButton6Click
    end
  end
  object GroupBox5: TGroupBox
    Left = 432
    Top = 40
    Width = 357
    Height = 61
    TabOrder = 4
    object Label3: TLabel
      Left = 4
      Top = 13
      Width = 26
      Height = 13
      Caption = '管径'
    end
    object btnAuto: TSpeedButton
      Left = 14
      Top = 35
      Width = 77
      Height = 22
      Caption = '自动复位'
      Flat = True
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = []
      ParentFont = False
      OnClick = btnAutoClick
    end
    object cbDevRadius: TComboBox
      Left = 36
      Top = 9
      Width = 53
      Height = 21
      Style = csDropDownList
      Ctl3D = False
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 0
      OnClick = cbDevRadiusClick
      Items.Strings = (
        '25'
        '50'
        '80')
    end
    object btnPreStart: TBitBtn
      Left = 116
      Top = 24
      Width = 75
      Height = 25
      Caption = '预启动'
      TabOrder = 1
      OnClick = btnPreStartClick
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333333333333333EEEEEEEEEEEEEEE333FFFFFFFFFFFFF3E00000000000
        00E337777777777777F3E0F77777777770E337F33333333337F3E0F333333333
        70E337F33333333337F3E0F33333333370E337F333FF3F3337F3E0F330030333
        70E337F3377F7FF337F3E0F33003003370E337F3377F77FF37F3E0F330030003
        70E337F3377F777337F3E0F33003003370E337F3377F773337F3E0F330030333
        70E337F33773733337F3E0F33333333370E337F33333333337F3E0F333333333
        70E337F33333333337F3E0FFFFFFFFFFF0E337FFFFFFFFFFF7F3E00000000000
        00E33777777777777733EEEEEEEEEEEEEEE33333333333333333}
      NumGlyphs = 2
    end
    object btnStart: TBitBtn
      Left = 196
      Top = 24
      Width = 75
      Height = 25
      Caption = '启动'
      TabOrder = 2
      OnClick = btnStartClick
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333333333333333EEEEEEEEEEEEEEE333FFFFFFFFFFFFF3E00000000000
        00E337777777777777F3E0F77777777770E337F33333333337F3E0F333333333
        70E337F3333F333337F3E0F33303333370E337F3337FF33337F3E0F333003333
        70E337F33377FF3337F3E0F33300033370E337F333777FF337F3E0F333000033
        70E337F33377773337F3E0F33300033370E337F33377733337F3E0F333003333
        70E337F33377333337F3E0F33303333370E337F33373333337F3E0F333333333
        70E337F33333333337F3E0FFFFFFFFFFF0E337FFFFFFFFFFF7F3E00000000000
        00E33777777777777733EEEEEEEEEEEEEEE33333333333333333}
      NumGlyphs = 2
    end
    object btnStop: TBitBtn
      Left = 276
      Top = 24
      Width = 75
      Height = 25
      Caption = '停机'
      TabOrder = 3
      OnClick = btnStopClick
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333333333333333333EEEEEEEEEEEEEEE333FFFFFFFFFFFFF3E00000000000
        00E337777777777777F3E0F77777777770E337F33333333337F3E0F333333333
        70E337F33333333337F3E0F33333333370E337F333FFFFF337F3E0F330000033
        70E337F3377777F337F3E0F33000003370E337F3377777F337F3E0F330000033
        70E337F3377777F337F3E0F33000003370E337F3377777F337F3E0F330000033
        70E337F33777773337F3E0F33333333370E337F33333333337F3E0F333333333
        70E337F33333333337F3E0FFFFFFFFFFF0E337FFFFFFFFFFF7F3E00000000000
        00E33777777777777733EEEEEEEEEEEEEEE33333333333333333}
      NumGlyphs = 2
    end
  end
  object GroupBox1: TGroupBox
    Left = 432
    Top = 101
    Width = 365
    Height = 320
    Caption = '设备信息'
    TabOrder = 5
    object Label4: TLabel
      Left = 20
      Top = 28
      Width = 52
      Height = 13
      Caption = '变电站名'
    end
    object Label7: TLabel
      Left = 16
      Top = 54
      Width = 52
      Height = 13
      Caption = '设备名称'
    end
    object Label11: TLabel
      Left = 13
      Top = 244
      Width = 59
      Height = 13
      Caption = '产品型式2'
    end
    object Label12: TLabel
      Left = 16
      Top = 182
      Width = 52
      Height = 13
      Caption = '生产厂家'
    end
    object Label13: TLabel
      Left = 16
      Top = 157
      Width = 52
      Height = 13
      Caption = '规格型号'
    end
    object Label14: TLabel
      Left = 16
      Top = 131
      Width = 52
      Height = 13
      Caption = '产品编号'
    end
    object Label16: TLabel
      Left = 16
      Top = 105
      Width = 52
      Height = 13
      Caption = '委托单位'
    end
    object Label6: TLabel
      Left = 16
      Top = 79
      Width = 52
      Height = 13
      Caption = '设备容量'
    end
    object Label8: TLabel
      Left = 16
      Top = 208
      Width = 52
      Height = 13
      Caption = '产品型式'
    end
    object SpeedButton1: TSpeedButton
      Left = 332
      Top = 20
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton3: TSpeedButton
      Left = 332
      Top = 100
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton3Click
    end
    object SpeedButton9: TSpeedButton
      Left = 332
      Top = 152
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton9Click
    end
    object SpeedButton11: TSpeedButton
      Left = 332
      Top = 176
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton11Click
    end
    object edtDevName: TEdit
      Left = 84
      Top = 50
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 1
    end
    object edtDevCapability: TEdit
      Left = 84
      Top = 76
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 2
    end
    object edtProductNo: TEdit
      Left = 84
      Top = 127
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 4
    end
    object lbProductSpec2: TCheckListBox
      Left = 84
      Top = 248
      Width = 249
      Height = 57
      Columns = 2
      ItemHeight = 13
      Items.Strings = (
        '瓦斯继电器流速校验台'
        '绝缘测试摇表'
        '数字式万用表'
        '便携式流速校验尺'
        '数字式高压表'
        '耐压装置')
      TabOrder = 7
    end
    object lbProductSpec1: TCheckListBox
      Left = 84
      Top = 204
      Width = 245
      Height = 37
      ItemHeight = 13
      Items.Strings = (
        '挡板式'
        '浮子式')
      TabOrder = 8
    end
    object edtPsName: TEdit
      Left = 84
      Top = 22
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 0
    end
    object edtConsignUnit: TEdit
      Left = 84
      Top = 102
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 3
    end
    object edtProvider: TEdit
      Left = 84
      Top = 178
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 6
    end
    object edtSpec: TEdit
      Left = 84
      Top = 154
      Width = 245
      Height = 19
      Ctl3D = False
      MaxLength = 60
      ParentCtl3D = False
      TabOrder = 5
    end
  end
  object sb: TStatusBar
    Left = 0
    Top = 560
    Width = 801
    Height = 19
    Panels = <
      item
        Width = 540
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object GroupBox6: TGroupBox
    Left = 316
    Top = 420
    Width = 473
    Height = 133
    TabOrder = 7
    object Label33: TLabel
      Left = 4
      Top = 12
      Width = 91
      Height = 13
      Caption = '试验结论与备注'
    end
    object Label34: TLabel
      Left = 16
      Top = 80
      Width = 26
      Height = 13
      Caption = '温度'
    end
    object Label35: TLabel
      Left = 159
      Top = 80
      Width = 26
      Height = 13
      Caption = '湿度'
    end
    object Label36: TLabel
      Left = 289
      Top = 84
      Width = 52
      Height = 13
      Caption = '试验人员'
    end
    object Label37: TLabel
      Left = 12
      Top = 108
      Width = 65
      Height = 13
      Caption = '试验负责人'
    end
    object Label38: TLabel
      Left = 243
      Top = 108
      Width = 26
      Height = 13
      Caption = '日期'
    end
    object SpeedButton4: TSpeedButton
      Left = 440
      Top = 75
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton4Click
    end
    object SpeedButton8: TSpeedButton
      Left = 180
      Top = 103
      Width = 23
      Height = 22
      Caption = '?'
      Font.Charset = ANSI_CHARSET
      Font.Color = clRed
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton8Click
    end
    object memoConlusion: TMemo
      Left = 8
      Top = 28
      Width = 461
      Height = 41
      Ctl3D = False
      Lines.Strings = (
        '')
      MaxLength = 200
      ParentCtl3D = False
      ScrollBars = ssVertical
      TabOrder = 0
    end
    object edtTemperature: TEdit
      Left = 48
      Top = 78
      Width = 89
      Height = 19
      Ctl3D = False
      MaxLength = 10
      ParentCtl3D = False
      TabOrder = 1
      OnKeyPress = FloatKeyPress
    end
    object edtWet: TEdit
      Left = 192
      Top = 78
      Width = 89
      Height = 19
      Ctl3D = False
      MaxLength = 10
      ParentCtl3D = False
      TabOrder = 2
      OnKeyPress = FloatKeyPress
    end
    object edtTestMan: TEdit
      Left = 348
      Top = 78
      Width = 89
      Height = 19
      Ctl3D = False
      MaxLength = 10
      ParentCtl3D = False
      TabOrder = 3
    end
    object edtCharge: TEdit
      Left = 88
      Top = 106
      Width = 89
      Height = 19
      Ctl3D = False
      MaxLength = 10
      ParentCtl3D = False
      TabOrder = 4
    end
    object dtTime: TDateTimePicker
      Left = 280
      Top = 104
      Width = 161
      Height = 21
      CalAlignment = dtaLeft
      Date = 37598.0923228819
      Time = 37598.0923228819
      DateFormat = dfLong
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 5
    end
  end
  object memoDebug: TMemo
    Left = 324
    Top = 380
    Width = 105
    Height = 37
    TabStop = False
    Ctl3D = False
    ParentCtl3D = False
    ScrollBars = ssVertical
    TabOrder = 8
  end
  object ImageList1: TImageList
    Left = 396
    Top = 220
    Bitmap = {
      494C010102000400040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000001000000001001000000000000008
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000EF3D0000
      FF7F000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E07F
      0000000000000000000000000000000000000000000000000000EF3DFF7FEF3D
      FF7F000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000FF7F
      0000000000000000000000000000000000000000000000000000EF3DFF7FEF3D
      FF7FFF7F00000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E07F
      0000000000000000000000000000000000000000000000000000EF3DFF7FEF3D
      EF3D0000FF7FFF7F000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000FF7F
      0000FF7F00000000000000000000000000000000000000000000EF3DFF7FEF3D
      FF7FEF3DEF3D0000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E07F
      0000E07F0000E07F000000000000000000000000000000000000EF3DFF7FEF3D
      FF7FEF3DFF7FEF3DFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000FF7F
      0000FF7F0000FF7F00000000000000000000000000000000EF3DEF3DFF7FEF3D
      0000EF3D0000EF3DFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E07F0000E07F
      FF7FE07FFF7FE07F0000000000000000000000000000EF3DFF7FEF3DFF7F0000
      000000000000EF3DFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FF7F0000FF7F
      E07FFF7FE07FFF7F0000000000000000000000000000EF3DFF7FEF3D00000000
      000000000000EF3DFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E07FFF7FE07F
      FF7FE07FFF7FE07F0000000000000000000000000000EF3D0000FF7F00000000
      000000000000EF3D000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000E07FFF7F
      E07FFF7FE07F000000000000000000000000000000000000EF3DFF7FFF7FFF7F
      FF7FFF7FEF3DFF7FFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000EF3DEF3DEF3DEF3D
      EF3DEF3DEF3DEF3DFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000FF03FF03
      FF03FF03FF03FF0300000000000000000000000000000000EF3DFF7FFF7FFF7F
      FF7FFF7FFF7FEF3DFF7FFF7F0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000EF3DEF3DEF3DEF3D
      EF3DEF3DEF3DEF3DEF3DFF7F0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000E07F0000000000000000000000000000EF3DEF3DEF3DEF3D
      EF3DEF3DEF3DFF7FEF3DFF7F0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000EF3DEF3DEF3DEF3D
      EF3DEF3DEF3DEF3DEF3D00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000100000000100010000000000800000000000000000000000
      000000000000000000000000FFFFFF00FDFFFAFF00000000F8FFF0FF00000000
      F8FFF07F00000000F87FF09F00000000F81FF02F00000000F80FF00F00000000
      F00FE14F00000000E00FC3CF00000000E00FC7CF00000000E00FD7DF00000000
      F01FE00F00000000F00FE00F00000000F00FE00700000000F007E00700000000
      F007E00700000000F007E00F0000000000000000000000000000000000000000
      000000000000}
  end
  object qry: TADOQuery
    Connection = dmd.dbcnn
    Parameters = <>
    Left = 460
    Top = 385
  end
  object Timer1: TTimer
    Interval = 2000
    OnTimer = Timer1Timer
    Left = 260
    Top = 408
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 6000
    OnTimer = Timer2Timer
    Left = 664
    Top = 41
  end
end
