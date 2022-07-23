a = input().split()
def minn(a, b):
	if (a > b):
		return a
	return b
print(minn(int(a[0]), int(a[1])))