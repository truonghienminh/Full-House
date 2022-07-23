import math
a, b = input().split()
a = float(a)
b = float(b)
print(math.floor(b) - math.ceil(a) + 1)