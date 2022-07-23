T = int(input())
for i in range(0, T):
	a = input().split()
	ans = 0
	for j in range(1, int(a[1]) + 1):
		ans += float(a[0])**j
	print('%.5f' % ans)