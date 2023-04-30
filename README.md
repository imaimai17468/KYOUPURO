# install

## 事前準備
python環境 / pipのインストールをしてください

## ライブラリをインストール
1. submissions以外のファイルをコピーしてね！（git cloneもアリ）
1. 必要なものはほぼ全て`requirements.txt`に入っているので、pipでインストールできる！

    `pip install -r requirements.txt`

1. `chromedriver_binary`は手動でインストールしよう！

    `pip install chromedriver_binary==Chromeのバージョン`

    Chromeのバージョンの確認は以下を参照

    > [Google Chrome を更新する](https://support.google.com/chrome/answer/95414?hl=ja&co=GENIE.Platform%3DDesktop)

    これの`Google Chrome について`というページで確認できる

    仮に失敗しても、「このバージョンならインストールできるんだが、、、」みたいのが表示されたはず

## コードの変更
- 4行目を自分のAtCoderのアカウント名に
- 125行目を、自分のリポジトリ名+`.git`に

にしてね！

## 実行

`python fetch_submission.py `

実行すると数秒に一回、ChromeでAtCoderの各問題の解答コードページが開かれる

そのページを読み取って`submissions`フォルダに保存していっているので、開かれたChromeは閉じないように
