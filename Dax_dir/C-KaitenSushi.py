n, m = map(int, input().split())

# 空のリストを作成
list_n = []
list_m = []
list_ans = []

# list_nへの入力
list_n = list(map(int, input().split()))

# list_mへの入力
list_m = list(map(int, input().split()))

for j in list_m:
    for i in list_n:
        if i <= j:
            list_ans.append(list_n.index(i)+1)
            break
        else:
            if len(list_n)-1 == list_n.index(i):
                list_ans.append(-1)

for i in list_ans:
    print(i)