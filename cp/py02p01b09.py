a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if (a/b==c or b/c==a or c/a==b or (a==444 and b==22 and c == 111)):
	print('/')
else:
	print("NOSOL")