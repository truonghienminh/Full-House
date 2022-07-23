T = int(input())
for i in range(0, T):
	s = input()
	a = s.title().split(" ")
	if (len(a) == 1):
		print(a[-1].upper())
	else:
		print(a[-1].upper(), end = ", ")
		a.remove(a[-1])
		for j in a:
			print(j, end = " ")
		print()