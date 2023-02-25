# install

## 事前準備
python環境 / pipのインストールをしてください

## ライブラリをインストール
1. 必要なものはほぼ全て`requirements.txt`に入っている

    `pip install -r requirements.txt`

2. `chromedriver_binary`は手動でインストール

    `pip install chromedriver_binary==Chromeのバージョン`

        Chromeのバージョンの確認は以下を参照
        [Google Chrome を更新する](https://support.google.com/chrome/answer/95414?hl=ja&co=GENIE.Platform%3DDesktop)

    これのGoogle Chrome についてというページで確認できる

    仮に失敗しても、「このバージョンならインストールできるんだが、、、」みたいのが表示されたはず

## 実行

実行すると数秒に一回、Chromeでの回答ページが開かれる

そのページを読み取って`submissions`フォルダに保存していっているので、開かれたChromeは閉じないように
