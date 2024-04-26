# env-c-mingw
mingwを使ったC言語での開発

## MinGWのダウンロードとインストール
UNIX（Linux）系OSではコンパイラとしてgccが使えるが、Windowsにはないため、MinGWという環境をインストールする必要がある。

### 1.ダウンロード
[MinGW](https://sourceforge.net/projects/mingw/)

### 2.インストール
continueを押下したのち、「mingw32-gcc-g++-bin」をチェックしてインストールする。

### 3.環境変数の設定
Pathに以下を追加する
```
C:\MinGW\bin
```
### 4.コマンド確認
以下コマンドを実行してバージョン情報が出力されることを確認。
```
$ gcc --version
gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0
Copyright (C) 2016 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

### コンパイルと実行

#### 1.コンパイル
```
$ gcc -o hello1 hello1.c
```

#### 2.実行
```
$ hello1
Hello World
```