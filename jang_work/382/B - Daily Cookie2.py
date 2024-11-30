# B - Daily Cookie 2
import sys
input = sys.stdin.readline

n, d = map(int, input().split())
s = input()
answer = ""

for i in range(n-1, -1, -1):
    if d > 0:
        if s[i] == "@":
            answer += "."
            d -= 1
        else:
            answer += "."
    else:
        answer += s[i]

print(answer[::-1])

