# A - Daily Cookie
import sys
input = sys.stdin.readline

n, d = map(int, input().split())
s = input()

answer = n - (s.count("@") - d)
print(answer)