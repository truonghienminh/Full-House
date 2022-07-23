
b, a = map(int, input().split(" "))
m = [0,31,28,31,30,31,30,31,31,30,31,30,31]
mn = [0,31,29,31,30,31,30,31,31,30,31,30,31]
if (b<0 or b>12):
	print("INVALID")
else:
	if (a%4==0):
		if (a%400==0):
			print(mn[b])
		elif (a%100==0):
			print(m[b])
		else:
			print(mn[b])
	elif (a>=0):
		print(m[b])
	else:
		print("INVALID")