T = int(input())
n = input().split()
a = []
a.append(1)
a.append(1)
for i in range (2, 10000):
	a.append(a[i-1] + a[i-2])
for i in range (0, T):
	print(a[int(n[i])])