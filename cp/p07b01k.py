n = int(input())
flag = False
a = input().split(" ")

for i in range(0, n//2):
	if (a[i] != a[n-i-1]):
		flag = True
if (flag == True):
	print("No")
else :
	print("YES")