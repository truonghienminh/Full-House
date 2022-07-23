import sys

for line in sys.stdin:
	for a in line.split():
		a = int(a)
		if (a%4==0):
			if (a%400==0):
				print("YES")
			elif (a%100==0):
				print("NO")
			else:
				print("YES")
		elif (a>=0):
			print("NO")
		else:
			print("INVALID")

		