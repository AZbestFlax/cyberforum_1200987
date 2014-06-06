object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Big-Small word'
  ClientHeight = 191
  ClientWidth = 554
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ledS: TLabeledEdit
    Left = 8
    Top = 19
    Width = 538
    Height = 21
    Color = clWhite
    EditLabel.Width = 28
    EditLabel.Height = 13
    EditLabel.Caption = 'String'
    TabOrder = 0
  end
  object ledBig: TLabeledEdit
    Left = 8
    Top = 59
    Width = 538
    Height = 21
    EditLabel.Width = 62
    EditLabel.Height = 13
    EditLabel.Caption = 'Biggest word'
    TabOrder = 1
  end
  object ledSmall: TLabeledEdit
    Left = 8
    Top = 99
    Width = 538
    Height = 21
    EditLabel.Width = 66
    EditLabel.Height = 13
    EditLabel.Caption = 'Smallest word'
    TabOrder = 2
  end
  object Button1: TButton
    Left = 8
    Top = 126
    Width = 538
    Height = 25
    Caption = 'Press to analyse'
    TabOrder = 3
    OnClick = Button1Click
    OnMouseDown = Button1MouseDown
    OnMouseUp = Button1MouseUp
  end
  object Button2: TButton
    Left = 8
    Top = 154
    Width = 538
    Height = 25
    Caption = 'Eenough and go sleep'
    TabOrder = 4
    OnClick = Button2Click
  end
end
