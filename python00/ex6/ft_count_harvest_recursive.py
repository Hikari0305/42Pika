def ft_count_harvest_recursive():
    days = int(input("Days until harvest: "))  # 例: 3 と入力されたとする

    # 内部関数（ヘルパー関数）の定義
    def count_days(current):
        if current > days:  # 【終了条件】現在の解が日数を超えたら終わる
            return
        print(f"Day {current}")  # 表示する
        count_days(current + 1)  # 【再帰呼び出し】次の日（+1）で自分自身を実行！

    count_days(1)  # まず「1日目」からスタート！
    print("Harvest time!")