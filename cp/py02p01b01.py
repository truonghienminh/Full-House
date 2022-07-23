import sys

for line in sys.stdin:
	for a in line.split():
		a = int(a)
		if (a%3==0 and a%5==0):
			print(1)
		else :
			print(0)