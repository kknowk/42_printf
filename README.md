# プロジェクトタイトル

42_printf

## 概要

C言語のライブラリである、printfの再実装をしています。

## プロジェクトの目的

42Tokyoの課題であり、また、可変長引数の扱いや文字列処理の知識習得のため。

## チャレンジした点

これからこのft_printfを先の課題で活用するので、持ち運びが便利なよう、  
なるべくコンパクトでスマートに書けるようにしました。  
特にft_putnbr_baseでは %x,%X（16進数）の処理がほとんど同じなので、  
一つの関数で収まるようフラグ管理を活用しました。

## 学んだこと

ssize_tという型があり、これはsize_tに、-1も含めた範囲を取り扱いときに使われる型で、  
writeやprintfのエラーの返り値である-1を取り扱えるように使われていることを知り、  
型の使われ方一つを取っても、意味があるんだなと学びました。  

## 使用方法

> ```bash
> #!/bin/bash
> cd 42_printf
> make
> ```

## 技術スタック

C言語

## 機能

> `ft_printf`  
