# 課題1 レポート
学籍番号　氏名


## 課題
長崎県にある市町村別人口データを読み込み、IDを用いて検索し、該当する市町村名、人口を出力するプログラムを作成する。

1. 使用するデータ
長崎県の人口データは、nagasaki.csvに保存されている。
nagasaki.csvには、csv形式で以下のデータが含まれる
    - ID
    - 県名
    - 市町村名
    - 人口
    - 男性人口
    - 女性人口

    長崎県の市町村別人口データは、下記に構造体の配列に読み込まれる。

```C: 市町村別データ構造体
typedef struct {  
    int id;  
    char pref[13];  // UTF-8対応  
    char name[19];  // UTF-8対応  
    int population;  
    int m_population;  
    int f_population;  
} City;  
```



2. 必須問題：実装する関数  
本課題では、以下の関数を実装する。  
   (1) LinearSearch：IDをキーとし、リニアサーチで市町村を検索する。  
    [入力]
    - int key: 検索する市町村のID
    - City arrayCity: 検索対象の都市別人口データ(配列)
    - int size: データの数  

    [出力]  
    - return値: IDが合致した配列データのindex。IDが一致するデータがない場合は-1。

    (2) BinarySearch: IDをキーとし、バイナリサーチで市町村を検索する。  
    [入力]
    - int key: 検索する市町村のID
    - City arrayCity: 検索対象の都市別人口データ(配列)
    - int left: バイナリサーチを行う配列のindex(左端)
    - int right: バイナリサーチを行う配列のindex(右端)  

    [出力]  
    - return値: IDが合致した配列データのindex。IDが一致するデータがない場合は-1。


3. 補助関数
以下の関数はすでに実装されており、利用することができる。  
- PrintCity: 特定の市町村別人口データを出力する  
- PrintArray: 市町村別人口データをすべて出力する  
- LoadData: 市町村別人口データを読み込み、City型の配列に格納する  
- main: メイン関数。データをロードし、リニアサーチ、バイナリサーチを呼び出す  


## ソースコードの説明
l.68 pos定義
l.69 result 定義
l.72 検索を繰り返すfor文の作成
l.73~75 対象の値が見つかったらresultにposを代入
l.77 else文
l.79 resultで結果を返す

l.85 psp定義
l.89 result定義
l.91　left<=rightになるまで繰り返す
l.92 pspの動作
l.93 if文でもし探す値がヒットしたら
l.94 resultにpspの値を入れる
l.95 break により処理終了
l.97　else if文でもし探している値が今の基準値より大きいとき
l.98　leftはpsp+1
l.100 else文でもし探している値が今の基準より小さいとき
l.101 rightはpsp-1
l.104 returnで結果を返す


## 出力結果

```===== linear search =====
City ID?42411
42411, 長崎県, 新上五島町, 19718, 9197, 10521

===== binary search =====
City ID?42391
42391, 長崎県, 佐々町, 13626, 6426, 7200
PS C:\Users\bb35319029\Desktop\2020psp3\2020psp3\k01>


```

## 修正履歴

