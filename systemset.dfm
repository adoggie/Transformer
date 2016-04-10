object frmSysset: TfrmSysset
  Left = 230
  Top = 233
  BorderStyle = bsDialog
  Caption = '参数设置'
  ClientHeight = 345
  ClientWidth = 606
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = '宋体'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label13: TLabel
    Left = 28
    Top = 308
    Width = 52
    Height = 13
    Caption = '通信端口'
  end
  object GroupBox1: TGroupBox
    Left = 20
    Top = 8
    Width = 565
    Height = 93
    Caption = '管径 20'
    Ctl3D = True
    ParentCtl3D = False
    TabOrder = 0
    object Label1: TLabel
      Left = 44
      Top = 32
      Width = 65
      Height = 13
      Caption = '传感器常数'
    end
    object Label2: TLabel
      Left = 328
      Top = 32
      Width = 52
      Height = 13
      Caption = '误差修正'
    end
    object Label3: TLabel
      Left = 16
      Top = 60
      Width = 101
      Height = 13
      Caption = '流速定值80(m/s)'
    end
    object Label4: TLabel
      Left = 268
      Top = 60
      Width = 114
      Height = 13
      Caption = '轻瓦斯定值80(l/s)'
    end
    object edtSensor25: TEdit
      Left = 124
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtSpeed25: TEdit
      Left = 124
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 1
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtDiff25: TEdit
      Left = 388
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 2
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtGas25: TEdit
      Left = 388
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 3
      Text = '0'
      OnKeyPress = NumKeyPress
    end
  end
  object GroupBox2: TGroupBox
    Left = 20
    Top = 105
    Width = 565
    Height = 93
    Caption = '管径 50'
    TabOrder = 1
    object Label5: TLabel
      Left = 44
      Top = 32
      Width = 65
      Height = 13
      Caption = '传感器常数'
    end
    object Label6: TLabel
      Left = 328
      Top = 32
      Width = 52
      Height = 13
      Caption = '误差修正'
    end
    object Label7: TLabel
      Left = 16
      Top = 60
      Width = 101
      Height = 13
      Caption = '流速定值80(m/s)'
    end
    object Label8: TLabel
      Left = 268
      Top = 60
      Width = 114
      Height = 13
      Caption = '轻瓦斯定值80(l/s)'
    end
    object edtSensor50: TEdit
      Left = 124
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtSpeed50: TEdit
      Left = 124
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 1
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtDiff50: TEdit
      Left = 388
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 2
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtGas50: TEdit
      Left = 388
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 3
      Text = '0'
      OnKeyPress = NumKeyPress
    end
  end
  object GroupBox3: TGroupBox
    Left = 21
    Top = 202
    Width = 565
    Height = 93
    Caption = '管径 80'
    Color = clBtnFace
    ParentColor = False
    TabOrder = 2
    object Label9: TLabel
      Left = 44
      Top = 32
      Width = 65
      Height = 13
      Caption = '传感器常数'
    end
    object Label10: TLabel
      Left = 328
      Top = 32
      Width = 52
      Height = 13
      Caption = '误差修正'
    end
    object Label11: TLabel
      Left = 16
      Top = 60
      Width = 101
      Height = 13
      Caption = '流速定值80(m/s)'
    end
    object Label12: TLabel
      Left = 268
      Top = 60
      Width = 114
      Height = 13
      Caption = '轻瓦斯定值80(l/s)'
    end
    object edtSensor80: TEdit
      Left = 124
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtSpeed80: TEdit
      Left = 124
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 1
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtDiff80: TEdit
      Left = 388
      Top = 28
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 2
      Text = '0'
      OnKeyPress = NumKeyPress
    end
    object edtGas80: TEdit
      Left = 388
      Top = 56
      Width = 121
      Height = 19
      Ctl3D = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = '宋体'
      Font.Style = [fsBold]
      MaxLength = 12
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 3
      Text = '0'
      OnKeyPress = NumKeyPress
    end
  end
  object BitBtn1: TBitBtn
    Left = 424
    Top = 308
    Width = 75
    Height = 25
    Caption = '修 改'
    TabOrder = 3
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 508
    Top = 308
    Width = 75
    Height = 25
    Caption = '关 闭'
    TabOrder = 4
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object BitBtn3: TBitBtn
    Left = 308
    Top = 308
    Width = 75
    Height = 25
    Caption = '默认值'
    TabOrder = 5
    Visible = False
    OnClick = BitBtn3Click
  end
  object cbComPort: TComboBox
    Left = 96
    Top = 304
    Width = 101
    Height = 21
    Style = csDropDownList
    ItemHeight = 13
    TabOrder = 6
    Items.Strings = (
      'COM1'
      'COM2'
      'COM3'
      'COM4')
  end
end
