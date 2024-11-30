# C - Kaiten Sushi

def binary_search(oisisa, arr):
    start = 0
    end = len(arr)-1
    temp = []

    while start <= end:
        mid = (start + end) // 2
        if arr[mid] <= oisisa:
            start = mid + 1
            temp.append(arr[mid])
        else:
            end = mid - 1

    orders = []
    for i in temp:
        orders.append(gourmet.index(i) + 1)
    if orders:
        return min(orders)
    else:
        return -1


import sys
input = sys.stdin.readline

n, m = map(int, input().split())
gourmet = list(map(int, input().split()))
score = list(map(int, input().split()))

sorted_gourmet = sorted(list(i for i in gourmet if i <= max(score)))
answer = []

for i in range(m):
    print(binary_search(score[i], sorted_gourmet))