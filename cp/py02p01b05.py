import datetime

x = int(input())
year = x//365
x %= 365
week = x//7
x %= 7
print(year, week, x)