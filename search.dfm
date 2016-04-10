object frmSearch: TfrmSearch
  Left = 61
  Top = 267
  Width = 692
  Height = 286
  Caption = '历史记录选择'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = '宋体'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poScreenCenter
  Visible = True
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 684
    Height = 89
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 0
      Top = 0
      Width = 684
      Height = 89
      Align = alClient
      Caption = '搜索'
      TabOrder = 0
      object BitBtn2: TBitBtn
        Left = 108
        Top = 48
        Width = 77
        Height = 29
        Cancel = True
        Caption = 'BitBtn2'
        TabOrder = 5
      end
      object ckRadius: TCheckBox
        Left = 16
        Top = 24
        Width = 97
        Height = 17
        Caption = '管径'
        TabOrder = 3
      end
      object ckTime: TCheckBox
        Left = 16
        Top = 52
        Width = 97
        Height = 17
        Caption = '时间'
        TabOrder = 0
      end
      object Panel3: TPanel
        Left = 60
        Top = 44
        Width = 321
        Height = 37
        BevelOuter = bvNone
        TabOrder = 1
        object Label1: TLabel
          Left = 148
          Top = 16
          Width = 8
          Height = 13
          Caption = '~'
          Font.Charset = ANSI_CHARSET
          Font.Color = clBlue
          Font.Height = -13
          Font.Name = '宋体'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object dt1: TDateTimePicker
          Left = 12
          Top = 8
          Width = 129
          Height = 21
          CalAlignment = dtaLeft
          Date = 37598.9415211111
          Time = 37598.9415211111
          DateFormat = dfLong
          DateMode = dmComboBox
          Kind = dtkDate
          ParseInput = False
          TabOrder = 0
        end
        object dt2: TDateTimePicker
          Left = 164
          Top = 8
          Width = 125
          Height = 21
          CalAlignment = dtaLeft
          Date = 37598.9415211111
          Time = 37598.9415211111
          DateFormat = dfLong
          DateMode = dmComboBox
          Kind = dtkDate
          ParseInput = False
          TabOrder = 1
        end
      end
      object cbDevRadius: TComboBox
        Left = 72
        Top = 20
        Width = 81
        Height = 21
        Style = csDropDownList
        Ctl3D = False
        ItemHeight = 13
        ParentCtl3D = False
        TabOrder = 2
        Items.Strings = (
          '25'
          '50'
          '80')
      end
      object BitBtn1: TBitBtn
        Left = 396
        Top = 52
        Width = 75
        Height = 25
        Caption = '查询'
        Default = True
        TabOrder = 4
        OnClick = BitBtn1Click
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 89
    Width = 684
    Height = 170
    Align = alClient
    BevelOuter = bvNone
    BorderWidth = 3
    TabOrder = 1
    object dg: TDBGrid
      Left = 3
      Top = 3
      Width = 678
      Height = 164
      Align = alClient
      DataSource = DataSource1
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = ANSI_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = '宋体'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'radius'
          Title.Caption = '管径'
          Width = 48
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ps'
          Title.Caption = '变电站'
          Width = 97
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'devname'
          Title.Caption = '设备名称'
          Width = 100
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'devcapability'
          Title.Caption = '设备性能'
          Width = 93
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'consingunit'
          Title.Caption = '委托单位'
          Width = 92
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'productno'
          Title.Caption = '产品编号'
          Width = 86
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'spec'
          Title.Caption = '规格型号'
          Width = 87
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'provider'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'productspec1'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'productspec2'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'conclusion'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'temperature'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'wet'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'tester'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'charge'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'opttime'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'verify_jdq_step1'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'verify_jdq_step2'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'verify_jdq_step3'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'jy_gt300'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'jy_2000'
          Visible = False
        end
        item
          Expanded = False
          FieldName = 'mf'
          Visible = False
        end>
    end
  end
  object DataSource1: TDataSource
    DataSet = query
    Left = 408
    Top = 40
  end
  object query: TADOQuery
    Connection = dmd.dbcnn
    AfterScroll = queryAfterScroll
    Parameters = <>
    SQL.Strings = (
      'select * from test')
    Left = 444
    Top = 41
    object queryid: TAutoIncField
      FieldName = 'id'
    end
    object queryradius: TWideStringField
      FieldName = 'radius'
      OnGetText = queryradiusGetText
      Size = 50
    end
    object queryps: TWideStringField
      FieldName = 'ps'
      Size = 50
    end
    object querydevname: TWideStringField
      FieldName = 'devname'
      Size = 50
    end
    object querydevcapability: TWideStringField
      FieldName = 'devcapability'
      Size = 50
    end
    object queryconsingunit: TWideStringField
      FieldName = 'consingunit'
      Size = 50
    end
    object queryproductno: TWideStringField
      FieldName = 'productno'
      Size = 50
    end
    object queryspec: TWideStringField
      FieldName = 'spec'
      Size = 50
    end
    object queryprovider: TWideStringField
      FieldName = 'provider'
      Size = 50
    end
    object queryproductspec1: TWideStringField
      FieldName = 'productspec1'
      Size = 50
    end
    object queryproductspec2: TWideStringField
      FieldName = 'productspec2'
      Size = 50
    end
    object queryconclusion: TWideStringField
      FieldName = 'conclusion'
      Size = 255
    end
    object querytemperature: TWideStringField
      FieldName = 'temperature'
      Size = 50
    end
    object querywet: TWideStringField
      FieldName = 'wet'
      Size = 50
    end
    object querytester: TWideStringField
      FieldName = 'tester'
      Size = 50
    end
    object querycharge: TWideStringField
      FieldName = 'charge'
      Size = 50
    end
    object queryopttime: TDateTimeField
      FieldName = 'opttime'
    end
    object queryverify_jdq_step1: TWideStringField
      FieldName = 'verify_jdq_step1'
      Size = 50
    end
    object queryverify_jdq_step2: TWideStringField
      FieldName = 'verify_jdq_step2'
      Size = 50
    end
    object queryverify_jdq_step3: TWideStringField
      FieldName = 'verify_jdq_step3'
      Size = 50
    end
    object queryjy_gt300: TWideStringField
      FieldName = 'jy_gt300'
      Size = 50
    end
    object queryjy_2000: TWideStringField
      FieldName = 'jy_2000'
      Size = 50
    end
    object querymf: TWideStringField
      FieldName = 'mf'
      Size = 50
    end
  end
end
