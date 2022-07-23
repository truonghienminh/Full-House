import math

a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)

delta = b*b - 4*a*c
if (a == 0):
	if (b == 0 and c != 0):
		print(c)
	elif (b != 0 and c == 0):
		print(0)
	else :
		print("INF")
else:	
	if delta == 0:
		print('%.2f' % (-b/(2*a)))
	if delta < 0:
		print("NO")
	if delta > 0:
		x1 = (-b + math.sqrt(delta))/(2*a)
		x2 = (-b - math.sqrt(delta))/(2*a)
		print('%.2f' % x1, '%.2f' % x2)